/*
** EPITECH PROJECT, 2018
** MY_STR_IS-PRINTABLE
** File description:
** Write 1 if the string contains only printable characters
*/

int my_str_isprintable(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32) {
            return (0);
        }
    }
    return (1);
}