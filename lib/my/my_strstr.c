/*
** EPITECH PROJECT, 2018
** MY_STRSTR
** File description:
** Find a string in another string
*/
#include <stdlib.h>

int my_strlen(char const *src);

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int k;
    int corresp = 0;
    int len;

    len = my_strlen(to_find);
    while (str[i] != '\0'){
        k = 0;
        while (to_find[k] != '\0' && str[i] == to_find[k]) {
            corresp++;
            k++;
            i++;
        }
        if (corresp == len) {
            return (&str[i - k]);
        }
        i++;
    }
    return (NULL);
}
