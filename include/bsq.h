/*
** EPITECH PROJECT, 2018
** bsq.h
** File description:
** bsq.h
*/

#ifndef BSQ_H_
#define BSQ_H_

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct square {
    int size_big;
    int x_big;
    int y_big;
} square_t;

void find_the_square(char **tab);

#endif
