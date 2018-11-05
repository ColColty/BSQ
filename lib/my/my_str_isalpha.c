/*
** EPITECH PROJECT, 2018
** MY_STR_IS-ALPHA
** File description:
** Return 1 if all characters are alphabetical characters
*/

int my_str_isalpha(char const *str)
{
    int i = 0;
    int alpha = 0;

    while (str[i] != '\0') {
        if ((str[i] <= 122 && str[i] >= 97) ||
        (str[i] >= 65 && str[i] <= 90)) {
            alpha = 1;
        } else {
            return (0);
        }
        i++;
    }
    return (alpha);
}