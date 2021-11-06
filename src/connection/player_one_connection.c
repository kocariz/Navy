/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** player_one_connection
*/

#include "navy.h"

int player_one_connection(void)
{
    int pid_one;

    pid_one = getpid();
    my_putstr("my_pid:\t");
    my_put_nbr(pid_one);
    my_putstr("\nwaiting for enemy connection...\n");
    pause();
    my_putstr("\nenemy connected\n");
    return (pid_one);
}