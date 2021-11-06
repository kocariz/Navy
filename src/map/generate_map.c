/*
** EPITECH PROJECT, 2020
** generate_map.c
** File description:
** generate_map.c
*/

#include "navy.h"

char **generate_sec_part_map(char **map)
{
    char num = '1';
    int f = 2;

    for (int i = 2; i <= 9; i++) {
        map[i] = malloc(sizeof(char) * 20);
        map[i][0] = num;
        num++;
        f = 2;
        map[i][1] = '|';
        while (f < 17) {
            map[i][f] = '.';
            f++;
            map[i][f] = ' ';
            f++;
        } map[i][f + 1] = '\0';
    }
    return (map);
}

char **generate_part_map(char **map)
{
    char num = '1';
    int f = 2;

    for (int i = 1; i < 2; i++) {
        map[1] = malloc(sizeof(char) * 20);
        map[1][0] = '-';
        map[1][1] = '+';
        while (f < 17) {
            map[1][f] = '-';
            f++;
        }
        map[1][f + 1] = '\0';
    }
    map = generate_sec_part_map(map);
    return (map);
}

char **generate_map(void)
{
    char **map = malloc(sizeof(char *) * 10);
    char character = 'A';
    int f = 2;

    for (int i = 0; i < 1; i++) {
        map[0] = malloc(sizeof(char) * 20);
        map[0][0]  = ' ';
        map[0][1] = '|';
        while (f <= 16) {
            if ( f == 17) {
                map[0][f] = character;
            } else {
                map[0][f] = character;
                character++;
                f = f + 1;
                map[0][f] = ' ';
                f = f + 1;
            }
        } map[0][f + 1] = '\0';
    } map = generate_part_map(map);
    return (map);
}