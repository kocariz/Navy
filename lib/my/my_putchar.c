/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** task01, my_putchar
*/

#include "../../include/navy.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}