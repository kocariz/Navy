/*
** EPITECH PROJECT, 2020
** navy.h
** File description:
** navy.h
*/

#ifndef __NAVY_H__
#define __NAVY_H__

#ifndef READ_SIZE
#define READ_SIZE 1
#endif

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>

#include "map.h"
#include "lib.h"

int pid_player;

t_map *create_map(char *path);
struct sigaction *sig;

char **generate_map(void);
char **add_boats(char **map, char **pos);
void print_arr(char **arr);
void print_map(char *path, t_map *map);
char **change_map(char *res, char **map, char *input);

int connection_players(int pid, int player, char *input);
int player_one_connection();
int player_two_connection(int pid_one);
int start_game(int player, int pid);
void handler(int x, siginfo_t *id, void *str);
void send(char *input, int pid, int is_ony_letter);
char *recieve(int pid);

int det_num(char let);
int det_num_two(char *letter);
int chnage_to_int(char let);
int det_won(char *letter);
char det_letter(int let);
char det_lose(int let);

void check_hit_or_miss(char *input, t_map *map, int pid_one);
int hit_or_miss(char *input, char **map_boat);
int sep_game(int player, t_map *map, char *path, int pid);
void attack(t_map *map, int pid_one);
int end_game(char **map);

char **get_pos(char **pos, int fd);
int pos_error(char **pos);
int error_handling(int ac, char **av);

#endif
