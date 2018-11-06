/*
** EPITECH PROJECT, 2018
** MY_STRUPCASE
** File description:
** Set string in upper case
*/

char *my_strupcase(char *str)
{
    int i = 0;

    for (i; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
        else if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i];
    }
    return (str);
}