/*
** EPITECH PROJECT, 2020
** sep_game.c
** File description:
** sep_game.c
*/

#include "navy.h"

int find_end_ptwo(t_map *map, char *path, int pid, char *res)
{
    if (res[0] == 'l') {
        print_map(path, map);
        my_putstr("\nEnemy won\n");
        return (1);
    }
    else if (res[0] == 'q')
        return (0);
}

int find_end_pone(t_map *map, char *path, int pid, int result)
{
    if (result == 1) {
        print_map(path, map);
        my_putstr("\nI won\n");
        send("w", pid, 1);
    } else
        send("q", pid, 1);
}

int sep_game(int player, t_map *map, char *path, int pid)
{
    char *input = NULL;
    int pid_two = pid_player;
    int result = 0;
    char *res = NULL;

    if (player == 1) {
        attack(map, pid);
        result = end_game(map->map);
        find_end_pone(map, path, pid, result);
        return (result);
    }
    else if (player == 2) {
        my_putstr("\nwaiting for enemy's attack...\n");
        input = recieve(pid);
        check_hit_or_miss(input, map, pid);
        res = recieve(pid);
        result = find_end_ptwo(map, path, pid, res);
        return (result);
    }
}