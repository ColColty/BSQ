/*
** EPITECH PROJECT, 2018
** MY_SHOW_WORD_ARRAY
** File description:
** Show an array of words
*/
#include <stdlib.h>

int my_putstr(char const *str);

void my_putchar(char c);

int my_show_word_array(char * const *tab)
{
    int i;

    for (i = 0; tab[i] != 0; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return (0);
}