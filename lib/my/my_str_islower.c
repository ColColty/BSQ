/*
** EPITECH PROJECT, 2018
** MY_STR_ISLOWER
** File description:
** Write 1 if the string only contains lowercase alphabetical
*/

int my_str_islower(char const *str)
{
    int i = 0;
    int lower = 0;

    for (i; str[i] != '\0'; i++) {
        if (str[i] <= 122 && str[i] >= 97)
            lower = 1;
        else
            return (0);
    }
    return (lower);
}