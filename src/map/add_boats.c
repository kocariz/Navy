/*
** EPITECH PROJECT, 2020
** change_map.c
** File description:
** change_map.c
*/

#include "navy.h"

char **change_same_col(char **map, int i, char **pos)
{
    int col = det_num(pos[i][2]);
    int row = (pos[i][3] - '0') + 1;
    int row_la = (pos[i][6] - '0') + 1;
    char ship = pos[i][0];

    while (row <= row_la) {
        map[row][col] = ship;
        row++;
    }
    return (map);
}

char **change_same_row(char **map, int i, char **pos)
{
    int col = det_num(pos[i][2]);
    int row = (pos[i][3] - '0') + 1;
    int col_la = det_num(pos[i][5]);
    char ship = pos[i][0];

    while (col <= col_la) {
        map[row][col] = ship;
        col = col + 2;
    }
    return (map);
}

char **add_boats(char **map, char **pos)
{
    int col = 0;
    int row = 0;

    for (int i = 0; pos[i] != NULL; i++) {
        if ((my_strlen(pos[i]) != 7))
            return (NULL);
        if (i > 4)
            return (NULL);
    }
    for (int i = 0; i < 4; i++) {
        col = det_num(pos[i][2]);
        row = (pos[i][3] - '0') + 1;
        if (col == (det_num(pos[i][5])))
            map = change_same_col(map, i, pos);
        else if (row == ((pos[i][6] - '0') + 1))
            map = change_same_row(map, i, pos);
        else
            return (NULL);
    }
    return (map);
}