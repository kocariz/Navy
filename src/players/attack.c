/*
** EPITECH PROJECT, 2020
** attack.c
** File description:
** attack.c
*/

#include "navy.h"

void attack_two(char *input, char *res, t_map *map, int pid_one)
{
    send(input, pid_player, 0);
    my_putstr(input);
    my_putstr(": ");
    res = recieve(pid_one);
    if (res[0] == 't')
        my_putstr("hit");
    else if (res[0] == 'm')
        my_putstr("missed");
    my_putstr("\n");
    map->map = change_map(res, map->map, input);
}

void attack(t_map *map, int pid_one)
{
    char *input = NULL;
    char *res = NULL;
    int letter = 0;
    int num = 0;
    int is_valid_arg = 0;

    while (!is_valid_arg){
        my_putstr("\nattack: ");
        input = get_next_line(0);
        if (input[1] < 48 || input[1] > 57)
            my_putstr("wrong position");
        else if (my_strlen(input) > 2 ||
        hit_or_miss(input, map->map_boats) == 84 ||
        hit_or_miss(input, map->map) == 24 || input == NULL)
            my_putstr("wrong position");
        else
            is_valid_arg = 1;
    }
    attack_two(input, res, map, pid_one);
}