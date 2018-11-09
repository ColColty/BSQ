/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** Second file -> Find the square
*/

#include "my.h"

int find_the_square(char **tab, struct variables_square *find_square)
{
    if (tab[find_square->k] != 0) {
        if (tab[find_square->k][find_square->i] == 'o')
            my_putstr("hello\n");
    }
    my_put_nbr(find_square->k);
    my_put_nbr(find_square->i);
    my_put_nbr(find_square->dot_counter);
    my_put_nbr(find_square->ant_dot_counter);
    my_show_word_array(tab);
    return (0);
}