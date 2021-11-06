/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** task02, my_putstr
*/

#include "../../include/navy.h"

int my_strlen(char const *str)
{
    int x;

    x = 0;
    while ( str[x] != '\0'){
        x++;
    }
    return (x);
}
