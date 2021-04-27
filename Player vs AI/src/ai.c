/*
** EPITECH PROJECT, 2021
** artifial intelligence
** File description:
** main brain of my ai
*/

#include "../include/my.h"

int special_case(int match, int max, int count)
{
    if (count == 1) {
        if (match == max + 1)
            return (max);
        if (match == 1)
            return (1);
        if (match <= max)
            return (match - 1);
    }
    if (count == 2) {
        if (match == max + 1)
            return (max - 1);
        if (match <= 2)
            return (1);
        if (match <= max)
            return (match - 2);
    }
    return (1);
}

int ai_match(char **map, int line, int match)
{
    int nbr = rand() % match;
    int count = 0;

    for (int i = line; i != 0; i--)
        if (count_match(map, i) != 0)
            count++;
    if (count <= 2 && count_match(map, line) <= match + 1)
        return (special_case(count_match(map, line), match, count));
    while (nbr > count_match(map, line) || nbr <= 0)
        nbr = rand() % match;
    return (nbr);
}

int ai_line(char **map, int line)
{
    for (int i = line; i != 0; i--)
        if (count_match(map, i) != 0)
            return (i);
    return (0);
}

char **ai_turn(char **map, int line, int match)
{
    line = ai_line(map, line);
    match = ai_match(map, line, match);
    my_putstr("\nAI's turn...\n");
    my_putstr("AI removed ");
    my_put_nbr(match);
    my_putstr(" match(es) from line ");
    my_put_nbr(line);
    my_putchar(10);
    map = remove_match(map, line, match);
    display_map(map);
    return (map);
}

/*int special_case(int match, int max, int count)
{
    if (count == 1) {
        if (match == max + 1)
            return (max);
        if (match == 1)
            return (1);
        if (match <= max)
            return (match - 1);
    }
    if (count == 2) {
        if (match == max + 1)
            return (max - 1);
        if (match <= 2)
            return (1);
        if (match <= max)
            return (match - 2);
    }
    return (1);
}

int ai_match(char **map, int line, int match)
{
    int nbr = rand() % match;
    int count = 0;

    for (int i = line; i != 0; i--)
        if (count_match(map, i) != 0)
            count++;
    if (count <= 2 && count_match(map, line) <= match + 1)
        return (special_case(count_match(map, line), match, count));
    while (nbr > count_match(map, line) || nbr <= 0)
        nbr = rand() % match;
    return (nbr);
}*/

/*  int nbr = rand() % match;
    int count = 0;

    for (int i = line; i != 0; i--)
        if (count_match(map, i) != 0)
            count++;
    if (count == 1 && count_match(map, line) <= match + 1)
        return (special_case(count_match(map, line), match));
    while (nbr > count_match(map, line) || nbr <= 0)
        nbr = rand() % match;
    return (nbr);*/

/*int special_case(int match, int max)
{
    if (match < max)
        return (max - (max - match) - 1);
    if (match == max + 1)
        return (max);
    return (1);
}

int ai_match(char **map, int line, int match)
{
    int count = 0;

    for (int i = line; i != 0; i--)
        if (count_match(map, i) != 0)
            count++;
    if (count == 1) {
        if (count_match(map, line) == match + 1)
            return (match);
        if (count_match(map, line) == 1)
            return (1);
        if (count_match(map, line) <= match)
            return (count_match(map, line) - 1);
    }
    return (1);
}*/