/*
** EPITECH PROJECT, 2020
** my_evil_str
** File description:
** swap each letter with the last one
*/

int my_strlen(char const *str);

void my_array_swap(char *str, int a, int b);

char *my_revstr(char *str)
{
    int length = my_strlen(str);

    for (int i = 0 ; i <= length / 2 ; i++) {
        my_array_swap(str, length - i - 1, i);
    }
    return (str);
}

void my_array_swap(char *str, int a, int b)
{
    char tmp = str[a];

    str[a] = str[b];
    str[b] = tmp;
}
