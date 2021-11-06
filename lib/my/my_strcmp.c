/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** my_strcmp
*/

#include "../../include/navy.h"

int my_strcmp(char *s1, char *s2)
{
    int i = 0;
    int lenth1 = my_strlen(s1) - 1;
    int lenth2 = my_strlen(s2) - 1;

    if (s1 == NULL || s2 == NULL)
        return (84);
    if (lenth1 != lenth2)
        return (-1);
    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if (s1[i] != s2[i])
            return (-1);
    }
    return (0);
}
