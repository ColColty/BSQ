/*
** EPITECH PROJECT, 2018
** MY_PUTSTR
** File description:
** Displays one-by-one characters of a string
*/
void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;

    for (i; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}