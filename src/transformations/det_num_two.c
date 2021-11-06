/*
** EPITECH PROJECT, 2020
** det_num_two.c
** File description:
** det_num_two.c
*/

#include "navy.h"

int hit_mis(char *letter)
{
    int num = 0;

    if ((my_strcmp(letter, "missed")) == 0)
        num = 9;
    else if ((my_strcmp(letter, "hit")) == 0)
        num = 10;
    else
        num = det_won(letter);
    return (num);
}

int third_con(char *letter)
{
    int num = 0;

    if (letter[0] == 'G')
        num = 7;
    else if (letter[0] == 'H')
        num = 8;
    else
        num = hit_mis(letter);
    return (num);
}

int sec_con(char *letter)
{
    int num = 0;

    if (letter[0] == 'E')
        num = 5;
    else if (letter[0] == 'F')
        num = 6;
    else
        num = third_con(letter);
    return (num);
}

int con_det(char *letter)
{
    int num = 0;

    if (letter[0] == 'C')
        num = 3;
    else if (letter[0] == 'D')
        num = 4;
    else
        num = sec_con(letter);
    return (num);
}

int det_num_two(char *letter)
{
    int num = 0;

    if (letter[0] == 'A')
        num = 1;
    else if (letter[0] == 'B')
        num = 2;
    else
        num = con_det(letter);
    return (num);
}