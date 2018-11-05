/*
** EPITECH PROJECT, 2018
** MY_STRCAT
** File description:
** Concatenates two strings
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int k = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[k] != '\0') {
        dest[i] = src[k];
        k++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
