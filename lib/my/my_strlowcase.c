/*
** EPITECH PROJECT, 2018
** MY_STR-LOW-CASE
** File description:
** display in lower case a string
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    for (i; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i];
        else if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
    }
    return (str);
}
