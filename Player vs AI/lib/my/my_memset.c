/*
** EPITECH PROJECT, 2021
** my_memset
** File description:
** like function
*/

char *my_memset(char *s, char c, int size)
{
    for (int i = 0; i < size; i++)
        s[i] = c;
    return (s);
}