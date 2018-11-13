/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** bsq
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"

int nbr_lines(char const *str)
{
    int i;
    int lines = 0;

    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == '\n')
            lines++;
    return (lines);
}

void *malloc_tab(char const *str)
{
    int i = 0;
    int lines = nbr_lines(str) + 1;
    char **tab;
    int cols = 0;

    for (cols; str[cols] != '\n'; cols++);
    tab = malloc(sizeof(char*) * lines);
    for (i; i <= lines; i++)
        tab[i] = malloc(sizeof(char) * cols);
    tab[i] = 0;
    return (&tab[0]);
}

int buff_to_str(char *str)
{
    char **file;
    int i;
    int j = 0;
    int k = 0;

    file = malloc_tab(str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n'){
            file[k++][j] = '\0';
            j = 0;
            i++;
        }
        file[k][j++] = str[i];
    }
    file[k][j] = '0';
    my_show_word_array(file);
    find_the_square(file);
    return (0);
}

int fs_open_file(char const *file_path)
{
    int fd;
    char buffer[30000];

    fd = open(file_path, O_RDONLY);
    if (fd <= -1) {
        my_putstr("FAILURE\n");
        return (84);
    } else
        my_putstr("SUCCESS\n");
    read(fd, buffer, 29999);
    buff_to_str(buffer);
    close(fd);
    return (0);
}