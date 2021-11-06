/*
** EPITECH PROJECT, 2020
** detect_number.c
** File description:
** detect_number.c
*/

#include "navy.h"

int incorrect_position(char let)
{
    int num = 0;

    if (let != 'A' && let != 'B' && let != 'C' && let != 'D' &&
    let != 'E' && let != 'F' && let != 'G' && let != 'H')
        num = -1;
    else
        num = 0;
    return (num);
}

int det_num_f(char let, int num)
{
    if (let == 'G')
        num = 14;
    if (let == 'H')
        num = 16;
    return (num);
}

int det_num_t(char let, int num)
{
    if (let == 'E')
        num = 10;
    else if (let == 'F')
        num = 12;
    else
        num = det_num_f(let, num);
    return (num);
}

int det_num_tw(char let, int num)
{
    if (let == 'C')
        num = 6;
    if (let == 'D')
        num = 8;
    else
        num = det_num_t(let, num);
    return (num);
}

int det_num(char let)
{
    int num = 0;

    num = incorrect_position(let);

    if (let == 'A')
        num = 2;
    else if (let == 'B')
        num = 4;
    else
        num = det_num_tw(let, num);
    return (num);
}