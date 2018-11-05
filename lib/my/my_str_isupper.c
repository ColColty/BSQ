/*
** EPITECH PROJECT, 2018
** MY_STR_ISUPPER
** File description:
** Write 1 if the string only contains uppercase
*/

int my_str_isupper(char const *str)
{
    int i = 0;
    int upper = 0;

    while (str[i] != '\0') {
        if (str[i] <= 90 && str[i] >= 65) {
            upper = 1;
        } else {
            return (0);
        }
        i++;
    }
    return (upper);
}