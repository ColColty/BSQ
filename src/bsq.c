/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** bsq
*/

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
    int lines = 0;
    char **tab;
    int cols = 0;
    int prev_cols = 0;

    lines = my_getnbr(str) + 1;
    for (prev_cols; str[prev_cols] != '\n'; prev_cols++);
    for (cols = prev_cols + 1; str[cols] != '\n'; cols++);
    cols -= prev_cols;
    tab = malloc(sizeof(char*) * lines);
    for (i = 0; i < lines; i++) {
        tab[i] = malloc(sizeof(char) * (cols + 1));
        tab[i][cols] = '\0';
    }
    tab[--lines] = 0;
    return (&tab[0]);
}

int buff_to_str(char *str)
{
    char **file;
    int i = 0;
    int j = 0;
    int k = 0;
    int size = my_strlen(str);

    for (i = 0; str[i] != '\n'; i++);
    file = malloc_tab(str);
    for (i = i + 1; i <= size; i++) {
        if (str[i] == '\n' && i != size){
            k++;
            j = 0;
            i++;
        }
        file[k][j++] = str[i];
    }
    find_the_square(file);
    return (0);
}

int fs_open_file(char const *file_path)
{
    int fd = open(file_path, O_RDONLY);
    char *buffer;
    struct stat sd;

    if (fd <= -1)
        return (84);
    if (stat(file_path, &sd) == -1) {
        close(fd);
        return (84);
    }
    buffer = malloc(sd.st_size);
    if (buffer == NULL)
        return (84);
    read(fd, buffer, sd.st_size);
    buffer[--sd.st_size] = '\0';
    buff_to_str(buffer);
    close(fd);
    free(buffer);
    return (0);
}