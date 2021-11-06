/*
** EPITECH PROJECT, 2020
** change_to_int.c
** File description:
** change_to_int.c
*/

#include "navy.h"

int int_four(char let, int num)
{
    if (let == 'G')
        num = 7;
    if (let == 'H')
        num = 8;
    return (num);
}

int int_three(char let, int num)
{
    if (let == 'E')
        num = 5;
    else if (let == 'F')
        num = 6;
    else
        num = int_four(let, num);
    return (num);
}

int int_two(char let, int num)
{
    if (let == 'C')
        num = 3;
    if (let == 'D')
        num = 4;
    else
        num = int_three(let, num);
    return (num);
}

int chnage_to_int(char let)
{
    int num = 0;

    if (let == 'A')
        num = 1;
    else if (let == 'B')
        num = 2;
    else
        num = int_two(let, num);
    return (num);
}