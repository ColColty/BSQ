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
    for (i; i < lines; i++)
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
    biggest_square_t square = {0,0,1};

    file = malloc_tab(str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n'){
            file[k++][j] = '\0';
            j = 0;
            i++;
        }
        file[k][j++] = str[i];
    }
    file[k][0] = 0;
    my_show_word_array(file);
    find_the_square(file, 0, 0, square);
    free(file);
    return (0);
}

int fs_open_file(char const *file_path)
{
    int fd = open(file_path, O_RDONLY);
    char *buffer;
    struct stat sd;

    if (fd <= -1 || stat(file_path, &sd) == -1) {
        close(fd);
        my_putstr("FAILURE\n");
        return (84);
    } else
        my_putstr("SUCCESS\n");
    buffer = malloc(sd.st_size);
    if (buffer == NULL)
        return (84);
    read(fd, buffer, sd.st_size);
    buffer[sd.st_size] = '\0';
    buff_to_str(buffer);
    close(fd);
    free(buffer);
    return (0);
}