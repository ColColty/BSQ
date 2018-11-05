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

    while (dest[i] != '\0') {
        i++;
    }
    while (src[k] != '\0' && k <= nb) {
        if (src[i] == '\0') {
            dest[i] = '\0';
        }
        dest[i] = src[k];
        i++;
        k++;
    }
    return (dest);
}