/*
** EPITECH PROJECT, 2020
** det_letter.c
** File description:
** det_letter.c
*/

#include "navy.h"

char hit_miss_ret(int let)
{
    char letter = 0;

    if (let == 8)
        letter = 'm';
    else if (let == 9)
        letter = 't';
    else
        letter = det_lose(let);
    return (letter);
}

char third_let(int let)
{
    char letter = 0;

    if (let == 6)
        letter = 'G';
    else if (let == 7)
        letter = 'H';
    else
        letter = hit_miss_ret(let);
    return (letter);
}

char sec_let(int let)
{
    char letter = 0;

    if (let == 4)
        letter = 'E';
    else if (let == 5)
        letter = 'F';
    else
        letter = third_let(let);
    return (letter);
}

char con_let(int let)
{
    char letter = 0;

    if (let == 2)
        letter = 'C';
    else if (let == 3)
        letter = 'D';
    else
        letter = sec_let(let);
    return (letter);
}

char det_letter(int let)
{
    char letter = 0;

    if (let == 0)
        letter = 'A';
    else if (let == 1)
        letter = 'B';
    else
        letter = con_let(let);
    return (letter);
}