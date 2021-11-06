/*
** EPITECH PROJECT, 2020
** send.c
** File description:
** send.c
*/

#include "navy.h"

void send(char *input, int pid, int is_ony_letter)
{
    int count = 0;
    int num = input[1] - '0';
    int letter = det_num_two(input);

    for (; is_ony_letter != 1 && count < num; count++) {
        kill(pid_player, SIGUSR1);
    	usleep(20000);
    }
    count = 0;
    for (; count < letter; count++) {
        kill(pid_player, SIGUSR2);
    	usleep(20000);
    }
    kill(pid_player, SIGUSR1);
}

char *transform_res(int letter, int num)
{
    char *input = malloc(sizeof(char) * 10);

    input[0] = det_letter(letter);

    input[1] = num + '0' - 1;
    return (input);
}

char *recieve(int pid)
{
    int num = 0;
    int letter = -1;
    char *input = malloc(sizeof(char) * 10);

    for (;pid_player > 0; num++)
        pause();
    for (; pid_player < 0; letter++)
        pause();
    input = transform_res(letter, num);
    return (input);
}