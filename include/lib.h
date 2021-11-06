/*
** EPITECH PROJECT, 2020
** lib.h
** File description:
** lib.h
*/

#ifndef ___LIB_H__
#define __LIB_H__

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_put_nbr(int nb);
int my_getnbr(char const *str);
int my_strcmp(char *s1, char *s2);
char *get_next_line(int fd);
char *concat_strings(char *dest , char  const *src);

#endif
