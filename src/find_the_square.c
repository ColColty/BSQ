/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** Second file -> Find the square
*/

#include "my.h"

void *malloc_int(char **tab)
{
    int **tmp = NULL;
    int i = 0;
    int k = 0;
    int size_line = my_strlen(tab[1]);

    for (i; tab[i] != 0; i++);
    tmp = malloc(sizeof(int *) * i);
    for (k; k < i; k++) {
        tmp[k] = malloc(sizeof(int) * size_line);
        tmp[k][size_line] = '\0';
    }
    tmp[k] = malloc(sizeof(int));
    tmp[k] = 0;
    return (&tmp[0]);
}

int squaring_map(square_t square, char **tab, int x, int y)
{
    if (square.map[y - 1][x] <= square.map[y - 1][x - 1]
    && square.map[y - 1][x] <= square.map[y][x - 1])
        square.map[y][x] = square.map[y - 1][x] + 1;
    if (square.map[y - 1][x - 1] <= square.map[y - 1][x]
    && square.map[y - 1][x - 1] <= square.map[y][x - 1])
        square.map[y][x] = square.map[y - 1][x - 1] + 1;
    if (square.map[y][x - 1] <= square.map[y - 1][x - 1]
    && square.map[y][x - 1] <= square.map[y - 1][x])
        square.map[y][x] = square.map[y][x - 1] + 1;
}

void first_lines(square_t square, char **tab)
{
    int x = 0;
    int y = 0;

    for (x = 0; tab[0][x] != '\0'; x++) {
        if (tab[0][x] == 'o')
            square.map[0][x] = 0;
        else
            square.map[0][x] = 1;
    }
    for (y = 0; tab[y] != 0; y++) {
        if (tab[y][0] == 'o')
            square.map[y][0] = 0;
        else
            square.map[y][0] = 1;
    }
}

int find_biggest(square_t square, char **tab)
{
    int x = 0;
    int y = 0;
    int big = 0;
    int y_big = 0;
    int x_big = 0;

    for (y; square.map[y] != 0; y++)
        for (x = 0; square.map[y][x] != '\0'; x++)
            if (square.size_big < square.map[y][x]) {
                square.size_big = square.map[y][x];
                square.x_big = x;
                square.y_big = y;
            }
    big = square.size_big - 1;
    y_big = square.y_big;
    x_big = square.x_big;
    for (y = y_big - big; y <= y_big; y++)
        for (x = x_big - big; x <= x_big; x++)
            tab[y][x] = 'X';
    my_show_word_array(tab);
}

int find_the_square(char **tab)
{
    int y = 1;
    int x = 1;
    square_t square;

    square.size_big = 1;
    square.map = malloc_int(tab);
    first_lines(square, tab);
    for (y = 1; tab[y] != 0; y++) {
        for (x = 1; tab[y][x] != '\0'; x++) {
            if (tab[y][x] == 'o')
                square.map[y][x] = 0;
            else
                squaring_map(square, tab, x, y);
        }
    }
    find_biggest(square, tab);
    free(square.map);
    free(tab);
    return (0);
}