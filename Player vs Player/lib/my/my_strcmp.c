/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** Compare two string
*/

int my_strcmp(char const *s1, char const *s2)
{
    int	i = 0;

    while (s1[i] || s2[i]) {
        if (s1[i] < s2[i])
            return (-1);
        if (s1[i] > s2[i])
            return (1);
        i++;
    }
    return (0);
}
