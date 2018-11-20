/*
** EPITECH PROJECT, 2018
** MY.h
** File description:
** Write a library that includes all the prototyped functions
*/
#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include "bsq.h"

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_revstr(char *str);
int test_negatif(int nb, int p);
int test_null_putnbr(int nl);
int my_show_word_array(char * const * tab);
int my_getnbr(char const *str);

#endif