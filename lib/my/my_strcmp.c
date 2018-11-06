/*
** EPITECH PROJECT, 2018
** MY_STRCMP
** File description:
** Reproduce the behavior of strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    for (i; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++);
    if (s1[i] < s2[i])
        return (-1);
    else if (s1[i] > s2[i])
        return (1);
    return (0);
}