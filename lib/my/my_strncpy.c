/*
** EPITECH PROJECT, 2018
** MY_STR-N-CPY
** File description:
** Copy n characters from a string
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (i; src[i] != '\0' || i <= n; i++)
        dest[i] = src[i];
    if (i >= n)
        dest[n] = '\0';
    return (dest);
}
