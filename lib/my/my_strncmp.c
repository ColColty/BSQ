/*
** EPITECH PROJECT, 2018
** MY_STR-N-CMP
** File description:
** Compare for n characters between two strings
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n) {
        i++;
    }
    if (s1[i] < s2[i]) {
        return (-1);
    } else if (s1[i] > s2[i]) {
        return (1);
    } else {
        return (0);
    }
}