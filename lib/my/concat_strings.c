/*
** EPITECH PROJECT, 2019
** concat_strings.c
** File description:
** A function that conactenates two strings.
*/

#include "../../include/navy.h"

char *concat_strings(char *dest , char  const *src)
{
    int dest_len = 0;
    int i;
    int j = 0;

    while (dest[j] != '\0')
        j++;
    dest_len = j;
    for (i = 0 ;src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return (dest);
}
