/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/

#include "navy.h"

void usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./navy [first_player_pid] navy_positions\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tfirst_player_pid: only for the 2nd player.\
    pid of the first player.\n");
    my_putstr("\tnavy_positions: file representing the positions\
    of the ships.\n");
}

int main(int ac, char **av)
{
    int pid_one = 0;
    int pid_two = 0;

    if (error_handling(ac, av) == 1)
        return (84);
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h')
            usage();
        else
            pid_one = connection_players(pid_one, 1, av[1]);
    } else if (ac == 3)
        pid_two = connection_players(my_getnbr(av[1]), 2, av[2]);
    return (0);
}