/*
** EPITECH PROJECT, 2020
** getnextline.c
** File description:
** getnextline.c
*/

#include "../../include/navy.h"

char *realoc_str(char *line, int x)
{
    int i = 0;
    char *stock = malloc(sizeof(char) * (READ_SIZE + x + 1));

    if (!stock)
        return (NULL);

    for (i = 0 ; i < x ; i++)
        stock[i] = line[i];
    stock[i] = '\0';
    if (free != NULL)
        free (line);
    return (stock);
}

char *line_analyzer(char *buf, char *line, int *count, int *x)
{
    static int size = READ_SIZE;

    for (; (buf[*count] != '\n' && buf[*count] != '\0') && *count < READ_SIZE;
    (*count)++) {
        line[x[0]] = buf[*count];
        x[0]++;
        if (size == x[0]){
            line = realoc_str(line, x[0]);
            size = size + READ_SIZE;
        }
    }
    line[x[0]] = '\0';
    if (buf[*count] == '\n'){
        x[1] = 1;
        size = READ_SIZE;
        (*count)++;
    }
    return (line);
}

char *my_read(int *stop, int *count, int fd)
{
    static char buf[READ_SIZE];
    static int end_read = 0;

    if (end_read == 0) {
        end_read = read(fd, buf, READ_SIZE);
        *count = 0;
        buf[end_read] = '\0';
        if (end_read == 0) {
            *stop = 1;
            return (buf);
        }
    }
    end_read--;
    *stop = 0;
    return (buf);
}

char *get_next_line(int fd)
{
    char *buf;
    char *line = malloc(sizeof(char) * (READ_SIZE + 2));
    static int count = 0;
    int x[2];
    int stop  = 0;

    x[0] = 0;
    x[1] = 0;
    if (line == NULL || fd == -1)
        return (NULL);
    while (stop != 1) {
        buf = my_read(&stop, &count, fd);
        line = line_analyzer(buf, line, &count, x);
        if (stop != 1)
            stop = x[1];
    }
    line[x[0]] = '\0';
    if (line[0] == '\0' && buf[0] == '\0')
        return (NULL);
    return (line);
}