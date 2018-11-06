/*
** EPITECH PROJECT, 2018
** MY_STRCPY
** File description:
** Copy a string to a empty string
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (i; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
