/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** Get a nb from a string
*/

#include <stdio.h>

int is_number(char c)
{
    char arr[10] = "0123456789";

    for (int i = 0; i <= 9; i++)
        if (c == arr[i])
            return (1);
    return (0);
}

int my_getnbr(char *str)
{
    int nb = 0;

    for (int i = 0; str[i+1] != '\0'; i++)
        if (is_number(str[i]) == 0)
            return (-1);
    for (int i = 0; str[i] && str[i] > 47 && str[i] < 58; i++) {
        nb += str[i] - 48;
        if (str[i + 1] && str[i+1] > 47 && str[i+1] < 58)
            nb *= 10;
    }
    return (nb);
}