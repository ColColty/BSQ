/*
** EPITECH PROJECT, 2018
** MY_PUTSTR
** File description:
** Displays one-by-one characters of a string
*/

#include <unistd.h>
int my_strlen(char const* str);

int my_putstr(char const *str)
{
    int len = my_strlen(str);

    write(1, str, len);
    return (0);
}