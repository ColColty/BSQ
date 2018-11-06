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

    for (i; dest[i] != '\0'; i++);
    for (k; src[k] != '\0'; k++)
        dest[i + k] = src[k];
    dest[i] = '\0';
    return (dest);
}
