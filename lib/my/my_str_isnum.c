/*
** EPITECH PROJECT, 2018
** MY_STR_ISNUM
** File description:
** Print a function that returns 1 if string is numerical
*/

int my_str_isnum(char const *str)
{
    int i = 0;
    int num = 0;

    for (i; str[i] != '\0'; i++) {
        if (str[i] <= 57 && str[i] >= 48)
            num = 1;
        else
            return (0);
    }
    return (num);
}