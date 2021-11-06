/*
** EPITECH PROJECT, 2020
** hit_or_miss.c
** File description:
** hit_or_miss.c
*/

#include "navy.h"

int hit_or_miss(char *input, char **map_boat)
{
    int let = det_num(input[0]);
    int num = (input[1] - '0') + 1;

    if (let == -1 || num > 9)
        return (84);
    if (map_boat[num][let] == 'x' || map_boat[num][let] == 'o')
        return (24);
    if (map_boat[num][let] == '.')
        return (1);
    else if (map_boat[num][let] == ' ' || map_boat[num][let] == '-')
        return (84);
    else
        return (0);
}

void check_hit_or_miss(char *input, t_map *map, int pid_one)
{
    char *ret = 0;
    char *num = 0;
    int letter = det_num(input[0]);
    int nu = input[1] - '0' + 1;

    if ((hit_or_miss(input, map->map_boats)) == 1) {
        my_putstr(input);
        ret = "missed";
        my_putstr(": ");
        my_putstr(ret);
        my_putstr("\n");
        map->map_boats[nu][letter] = 'o';
    } else {
        my_putstr(input);
        ret = "hit";
        my_putstr(": ");
        my_putstr(ret);
        my_putstr("\n");
        map->map_boats[nu][letter] = 'x';
    }
    send(ret, pid_one, 1);
}