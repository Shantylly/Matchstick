/*
** EPITECH PROJECT, 2021
** player
** File description:
** handle player move
*/

#include "../include/my.h"

int check_match(int match, int max, int match_left)
{
    if (match < 0) {
        my_putstr("Error: invalid output (positive number expected)\n");
        return (0);
    }
    if (match == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (0);
    }
    if (match > max) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(max);
        my_putstr(" matches per turn\n");
        return (0);
    }
    if (match > match_left) {
        my_putstr("Error: not enough matches on this line\n");
        return (0);
    }
    return (1);
}

int check_line(int line, int size)
{
    if (line < 0) {
        my_putstr("Error: invalid output (positive number expected)\n");
        return (0);
    }
    if (line == 0 || line > size) {
        my_putstr("Error: this line is out of range\n");
        return (0);
    }
    return (1);
}

void end_turn(int line, int match)
{
    my_putstr("Player removed ");
    my_put_nbr(match);
    my_putstr(" match(es) from line ");
    my_put_nbr(line);
    my_putchar(10);
}

char **player_turn(char **map, int size, int max)
{
    char *line = NULL;
    char *match = NULL;
    int match_left = 0;
    size_t len = 0;

    do {
        do {
            my_putstr("Line: ");
            if (getline(&line, &len, stdin) == -1)
                return (0);

        } while (check_line(my_getnbr(line), size) == 0);
        my_putstr("Matches: ");
        if (getline(&match, &len, stdin) == -1)
            return (0);
        match_left = count_match(map, my_getnbr(line));
    } while (check_match(my_getnbr(match), max, match_left) == 0);
    end_turn(my_getnbr(line), my_getnbr(match));
    map = remove_match(map, my_getnbr(line), my_getnbr(match));
    display_map(map);
    return (map);
}