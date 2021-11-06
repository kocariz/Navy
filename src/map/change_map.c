/*
** EPITECH PROJECT, 2020
** change_map.c
** File description:
** change_map.c
*/

#include "navy.h"

char **change_map(char *res, char **map, char *input)
{
    int let = det_num(input[0]);
    int num = (input[1] - '0') + 1;

    if (let == -1)
        return (NULL);
    if (res[0] == 'm')
        map[num][let] = 'o';
    else
        map[num][let] = 'x';
    return (map);
}