/*
** EPITECH PROJECT, 2021
** map
** File description:
** handle map generation
*/

#include "../include/my.h"

void display_map(char **map)
{
    for (int i = 0; map[i] != 0; i++) {
        my_putstr(map[i]);
        my_putchar(10);
    }
}

char **remove_match(char **map, int line, int match)
{
    for (int count = my_strlen(map[line]); count != 0; count--) {
        if (map[line][count] == '|' && match != 0) {
            map[line][count] = ' ';
            match--;
        }
        if (match == 0)
            return (map);
    }
    return (NULL);
}

char **malloc_map(int line)
{
    int count = 0;
    char **map = malloc(sizeof(char *) * (line + 3));

    for (count = 0; count < line + 2; count++)
        map[count] = malloc(sizeof(char) * (line * 2) + 3);
    map[count] = NULL;
    return (map);
}

char **generate_map(int line)
{
    char **map = malloc_map(line);
    int y = 1;

    map[0] = my_memset(map[0], '*', (line * 2) + 1);
    for (int count = 1; count < line + 1; count++) {
        map[count] = my_memset(map[count], ' ', (line * 2) + 1);
        map[count][0] = '*';
        map[count][line * 2] = '*';
    }
    map[line + 1] = my_memset(map[line + 1], '*', (line * 2) + 1);
    for (int count = 0; y <= line; count++, y++)
        for (int x = line - count; x < line + count + 1; x++)
            map[y][x] = '|';
    return (map);
}

void my_free(char **map, int line)
{
    for (int count = 0; count < (line + 2); free(map[count++]));
    free(map);
}