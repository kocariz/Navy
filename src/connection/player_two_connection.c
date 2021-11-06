/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** player_two_connection
*/

#include "navy.h"

int player_two_connection(int pid_one)
{
    int pid_two;

    pid_two = getpid();
    if (kill(pid_one, SIGUSR1) == -1)
        return (-1);
    else
        my_putstr("my_pid:\t");
        my_put_nbr(pid_two);
        my_putstr("\nsuccesfully connected\n");
    return (pid_two);
}