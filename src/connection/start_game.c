/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** start_game
*/

#include "navy.h"

int start_game(int player, int pid_one)
{
    int pid = 0;
    int pid_two = 0;

    if (player == 1) {
        pid = player_one_connection();
        return (pid);
    }
    else if (player == 2) {
        pid_two = player_two_connection(pid_one);
        pid_player = pid_two;
        return (pid_two);
    }
}