/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** connection_player_one
*/

#include "navy.h"

void con_player(int pid, int player, char *path, t_map *map)
{
    int stop = 0;
    int pid_one = 666;
    int pid_two = 666;
    int i = 1;

    if (player == 1)
        pid_one = start_game(1, pid);
    else if (player == 2)
        pid_two = start_game(2, pid);
    print_map(path, map);
    while (stop != 1) {
        stop = sep_game(player, map, path, pid);
        if (player == 1)
            player = 2;
        else if (player == 2)
            player = 1;
        if ((i%2) == 0)
            print_map(path, map);
        i++;
    }
}

int connection_players(int pid, int player, char *path)
{
    t_map *map = create_map(path);
    sig = malloc(sizeof(struct sigaction));
    if (map == NULL)
        return (84);

    if (sig == NULL)
        return (84);
    sigemptyset(&sig->sa_mask);
    sig->sa_sigaction = (&handler);
    sig->sa_flags = SA_SIGINFO | SA_RESTART;

    if (sigaction(SIGUSR1, sig, NULL) == -1)
        return (-1);
    if (sigaction(SIGUSR2, sig, NULL) == -1)
        return (-1);
    con_player(pid, player, path, map);
}