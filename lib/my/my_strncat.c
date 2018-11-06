/*
** EPITECH PROJECT, 2018
** MY_STR-N-CAT
** File description:
** Concatenates n characters of a string to another
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int k = 0;

    for (i; dest[i] != '\0'; i++);
    for (k; src[k] != '\0' && k <= nb; k++) {
        if (src[i] == '\0')
            dest[i] = '\0';
        dest[i + k] = src[k];
    }
    return (dest);
}