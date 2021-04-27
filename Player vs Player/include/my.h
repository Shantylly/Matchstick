/*
** EPITECH PROJECT, 2020
** lib
** File description:
** headers for everything
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_puterr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_strcmp(char const *s1, char const *s2);
char *my_memset(char *s, char c, int size);
char **generate_map(int line);
void display_map(char **map);
void my_free(char **map, int line);
int matchstick(char **map, int line, int match);
char **player_turn(char **map, int size, int max);
int count_match(char **map, int line);
char **remove_match(char **map, int line, int match);

#endif /* !MY_H_ */
