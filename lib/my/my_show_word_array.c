/*
** EPITECH PROJECT, 2018
** MY_SHOW_WORD_ARRAY
** File description:
** Show an array of words
*/
#include <stdlib.h>
#include "../../include/my.h"

int my_show_word_array(char * const *tab)
{
    int i;
    int len = my_strlen(tab[0]);

    for (i = 0; tab[i] != 0; i++) {
        my_putstr(tab[i], len);
        my_putchar('\n');
    }
    return (0);
}