/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** put character
*/

#include <unistd.h>

int my_putchar(char c)
{
    if (write (1, &c, 1) != 1)
        return (1);
    return (0);
}
