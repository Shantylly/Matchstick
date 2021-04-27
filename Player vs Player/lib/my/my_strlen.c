/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** display one bye one charac of a string
*/

void my_putchar(char);

int my_strlen(char const *str)
{
    char act = '0';
    int i = 0;

    while (act != 0) {
        act = str[i];
        i++;
    }

    return (i-1);
}
