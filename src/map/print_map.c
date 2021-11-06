/*
** EPITECH PROJECT, 2020
** print_map.c
** File description:
** print_map.c
*/

#include "navy.h"

void print_map(char *path, t_map *map)
{
    my_putstr("\nmy positions:\n");
    print_arr(map->map_boats);
    my_putstr("\nenemy's positions:\n");
    print_arr(map->map);
}