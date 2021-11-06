/*
** EPITECH PROJECT, 2019
** to_number.c
** File description:
** A function that returns a number, sent to the function as a string.
*/

#include "../../include/navy.h"

int my_getnbr(char const *str)
{
    int sign = 1;
    int pos = 0;
    int nb = 0;
    int result =  0;

    if (str[0] == '-') {
        sign = -1;
        pos = 1;
    }
    for (pos; str[pos] != '\0'; pos++) {
        if (str[pos] >= '0' && str[pos] <= '9') {
            nb *= 10;
            nb += str[pos] - 48;
        } else {
            return (-1);
        }
    }
    result = nb * sign;
    return (result);
}