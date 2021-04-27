/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** handle game move
*/

#include "../include/my.h"

int count_match(char **map, int line)
{
    int nbr = 0;

    for (int i = 0; map[line][i] != '\0'; i++)
        if (map[line][i] == '|')
            nbr++;
    return (nbr);
}

int victory(char **map)
{
    for (int line = 1; map[line] != NULL; line++)
        if (count_match(map, line) != 0)
            return (1);
    return (0);
}

int matchstick(char **map, int line, int match)
{
    while (3) {
        my_putstr("\nPlayer 1 turn:\n");
        if (player_turn(map, line, match) == 0)
            return (0);
        if (map == NULL)
            return (0);
        if (victory(map) == 0) {
            my_putstr("Player 2 won !\n");
            return (2);
        }
        my_putstr("\nPlayer 2 turn:\n");
        if (player_turn(map, line, match) == 0)
            return (0);
        if (map == NULL)
            return (0);
        if (victory(map) == 0) {
            my_putstr("Player 1 won !\n");
            return (1);
        }
    }
    return (0);
}