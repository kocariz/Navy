/*
** EPITECH PROJECT, 2020
** print_arr.c
** File description:
** print.arr.c
*/

#include "../../include/navy.h"

void print_arr(char **arr)
{
    for (int i = 0; arr[i] != NULL; i++) {
        my_putstr(arr[i]);
        my_putchar('\n');
    }
}