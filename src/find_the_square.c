/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** Second file -> Find the square
*/

#include "my.h"

int finder(char **tab, int *x, int *y, int size)
{
    int xcount = *x;
    int ycount = *y;
    int incrementator = 0;

    for (ycount; ycount <= size; ycount++) {
        for (xcount; xcount <= size; xcount++)
            if (tab[ycount][xcount] == 'o' || tab[ycount][xcount] == '\0')
                incrementator = 1;
        if (incrementator)
            return (size - 1);
        else
            xcount = x;
    }
}

int find_the_square(char **tab, int x, int y, biggest_square_t square)
{
    int size = 1;

    size = finder(tab, &x, &y, size);
    if (size >= square.size) {
        square.size = size;
        square.x = x;
        square.y = y;
    }
    x++;
    if (tab[y][x] == '\0' || (tab[y][x] == 'o' && tab[y][x] == '\0'))
        y++;
    if (tab[y] != 0)
        find_the_square(tab, x, y, square);
    else
        print_square(tab, square);
    return (0);
}

void print_square(char **tab, biggest_square_t square)
{
    int x = square.x;
    int y = square.y;

    for (y; y <= square.size; y++)
        for (x; x <= square.size; x++)
            tab[y][x] = 'X';
    my_show_word_array(tab);
}