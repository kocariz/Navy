/*
** EPITECH PROJECT, 2020
** map.c
** File description:
** map.c
*/

#include "navy.h"

t_map *create_map(char *path)
{
    t_map *map = malloc(sizeof(t_map));
    int fd = open(path, O_RDONLY);
    char **pos = malloc(sizeof(char *) * 4);

    if (map == NULL)
        return (NULL);
    map->map = malloc(sizeof(char *) * 10);
    map->map_boats = malloc(sizeof(char *) * 10);

    map->map = generate_map();
    map->map_boats = generate_map();
    pos = get_pos(pos, fd);
    if (pos == NULL || (pos_error(pos)) == 84 ||
    map->map == NULL || map->map_boats == NULL)
        return (NULL);
    map->map_boats = add_boats(map->map_boats, pos);
    if (map->map_boats == NULL)
        return (NULL);
    return (map);
}