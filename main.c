/*
** EPITECH PROJECT, 2018
** MAIN
** File description:
** main
*/

int fs_open_file(char const *file_path);

int main(int argc, char **argv)
{
    fs_open_file(argv[1]);
    return (0);
}