/*
** EPITECH PROJECT, 2020
** get_pos.c
** File description:
** get_pos.c
*/

#include "navy.h"

int check_error(char **pos)
{
    int error = 0;

    if (pos[0][0] == pos[1][0] || pos[0][0] == pos[2][0] ||
    pos[0][0] == pos[3][0])
        error = 1;
    if (pos[1][0] == pos[2][0] || pos[1][0] == pos[3][0])
        error = 1;
    if (pos[2][0] == pos[3][0])
        error = 1;
    return (error);
}

int check_lengths(char **pos, int i)
{
    int first = pos[i][3] - '0';
    int last = pos[i][6] - '0';
    int let_first = chnage_to_int(pos[i][2]);
    int let_last = chnage_to_int(pos[i][5]);
    int dif = last - first + 1;
    int dif_let = let_last - let_first + 1;
    int ret = 0;

    if (let_first == let_last) {
        if (dif == (pos[i][0] - '0'))
            ret = 1;
    } else if (first == last) {
        if (dif_let == (pos[i][0] - '0'))
            ret = 1;
    }
    else
        ret = 0;
    return (ret);
}

int pos_error(char **pos)
{
    int i = 0;
    int ret = 0;

    while (pos[i] != NULL) {
        ret = check_lengths(pos, i);
        if ((check_error(pos)) == 1)
            return (84);
        if ((det_num(pos[i][2])) == -1 || (det_num(pos[i][5])) == -1)
            return (84);
        if (ret != 1)
            return (84);
        i++;
    }
}

char **get_pos(char **pos, int fd)
{
    for (int i = 0; i < 4; i++) {
        pos[i] = malloc(sizeof(char) * 10);
            if (pos[i] == NULL)
                return (NULL);
        pos[i] = get_next_line(fd);
        if (pos[i] == NULL)
            return (NULL);
    }
    return (pos);
}