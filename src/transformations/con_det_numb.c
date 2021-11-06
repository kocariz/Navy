/*
** EPITECH PROJECT, 2020
** con_det_numb.c
** File description:
** con_det_numb.c
*/

#include "navy.h"

int det_won(char *letter)
{
    int num = 0;

    if (letter[0] == 'w')
        num = 11;
    if (letter[0] == 'q')
        num = 12;
    return (num);
}

char det_lose(int let)
{
    char letter = 0;

    if (let == 10)
        letter = 'l';
    if (let == 11)
        letter = 'q';
    return (letter);
}