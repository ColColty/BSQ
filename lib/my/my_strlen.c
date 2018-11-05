/*
** EPITECH PROJECT, 2018
** MY_STRLEN
** File description:
** Display how many characters in my string
*/

int my_strlen(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }
    return (count);
}
