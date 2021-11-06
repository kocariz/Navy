/*
** EPITECH PROJECT, 2020
** end_game.c
** File description:
** end_game.c
*/

#include "navy.h"

int end_game(char **map)
{
    int i = 0;
    int j = 2;
    int end = 0;

    while (map[i] != NULL) {
        while (map[i][j] != '\0') {
            if (map[i][j] == 'x')
                end++;
            j++;
        }
        j = 2;
        i++;
    }
    if (end == 14)
        return (1);
    else
        return (0);
}