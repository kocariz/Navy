/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** handler
*/

#include "navy.h"

void handler(int x, siginfo_t *id, void *str)
{
    pid_player = id->si_pid;
    if (x == SIGUSR1)
        pid_player *= 1;
    if (x == SIGUSR2)
        pid_player *= -1;
}