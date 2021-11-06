/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** task02, my_putstr
*/

#include "../../include/navy.h"

int my_putstr(char const *str)
{
    int x = 0;

    for (x = 0 ; str[x] != '\0' ; x++) {
        my_putchar(str[x]);
    }
    return (x);
}
