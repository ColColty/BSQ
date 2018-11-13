/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** Second file -> Find the square
*/

#include "my.h"

int test_square(char **tab, int x, int *y, int *h)
{
    int i = 0;
    int k = 0;
    int break_toggle = -1;

    for (k = 0; k < x; k++) {
        for (i = 0; i < x; i++) {
            if (tab[k][i] == '\n') {
                i = x;
                *h = *h + 1;
                *y = 0;
            } else if (tab[k][i] == 'o') {
                break_toggle = i;
                *y = x;
            }
            *y = *y + 1;
        }
    }
    x++;
    if (tab[k][i] != '\0')
        test_square(tab, x, &k, &h);
    else
        return (break_toggle);
}

int find_the_square(char **tab)
{
    int how_many = 0;
    int y = 0;
    int i = 0;
    int j = 0;
    int h = 0;

    how_many = test_square(tab, 1, &y, &h);
    for (i = h; i < how_many; i++)
        for (j = y; j <= how_many; j++)
            tab[i][j] = 'X';
    my_show_word_array(tab);
    return (0);
}