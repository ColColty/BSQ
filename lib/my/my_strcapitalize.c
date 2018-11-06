/*
** EPITECH PROJECT, 2018
** MY_STR-CAPITALIZE
** File description:
** Capitalize all the words
*/

#include "../../include/my.h"

char my_strupcase_char(char str)
{
    if (str >= 97 && str <= 122)
        str = str - 32;
    else if (str >= 65 && str <= 90)
        str = str;
    return (str);
}

int my_is_alphanumeric_cap(char c)
{
    char str[2] = {0};

    str[0] = c;
    str[1] = '\0';
    if (my_str_isalpha(str) || my_str_isnum(str))
        return (1);
    return (0);
}

char *my_strcapitalize(char *str)
{
    int i;

    str = my_strlowcase(str);
    for (i = 0; str[i] != '\0'; i++) {
        if (my_is_alphanumeric_cap(str[i]))
            my_putchar(str[i]);
        else
            my_putchar(my_strupcase_char(str[i + 1]));
    }
    return (0);
}