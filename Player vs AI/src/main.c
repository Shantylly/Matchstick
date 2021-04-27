/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** main for game matchstick
*/

#include "../include/my.h"

int error(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        my_putstr("Usage : ./matchstick $LINES $MATCH\n");
        my_putstr("\tLINES : number of lines\n\tMATCH :");
        my_putstr(" maximum number of matches that can be taken out\n");
        return (2);
    }
    if (ac != 3) {
        my_puterr("Error : Not enough arguments\n");
        return (1);
    }
    if (my_getnbr(av[1]) <= 1 || my_getnbr(av[1]) >= 100) {
        my_puterr("Error : at first argument, 1 < Lines < 100\n");
        return (1);
    }
    if (my_getnbr(av[2]) <= 1) {
        my_puterr("Error : at second argument, 1 < Matchs\n");
        return (1);
    }
    return (0);
}

int main(int ac, char **av)
{
    int err = error(ac, av);
    int ret = 0;
    char **map;

    if (err == 1)
        return (84);
    else if (err == 2)
        return (0);
    map = generate_map(my_getnbr(av[1]));
    display_map(map);
    ret = matchstick(map, my_getnbr(av[1]), my_getnbr(av[2]));
    my_free(map, my_getnbr(av[1]));
    return (ret);
}