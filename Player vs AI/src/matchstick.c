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
        my_putstr("\nYour turn:\n");
        if (player_turn(map, line, match) == 0)
            return (0);
        if (map == NULL)
            return (0);
        if (victory(map) == 0) {
            my_putstr("You lost, too bad...\n");
            return (2);
        }
        ai_turn(map, line, match);
        if (map == NULL)
            return (0);
        if (victory(map) == 0) {
            my_putstr("I lost... snif... but I'll get you next time!!\n");
            return (1);
        }
    }
    return (0);
}