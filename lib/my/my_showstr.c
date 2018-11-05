/*
** EPITECH PROJECT, 2018
** MY_SHOWSTR
** File description:
** Writes a function prints a string and returns 0
*/

void my_put_nbr(int nb);
void my_putchar(char c);

void char_non_printable(char c)
{
    int nb = (int)c;

    if ((c > 9 && c < 16) || (c > 25 && c < 32)) {
        my_put_nbr(((nb / 10) % 10) - 1);
        if (nb <= 16) {
            my_putchar(97 + (nb % 10));
        } else {
            my_putchar(97 + ((nb % 10) - 6));
        }
    } else if (c > 15 && c < 26) {
        my_put_nbr(nb - 6);
    } else {
        my_put_nbr(nb);
    }
}

int my_showstr(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32) {
            my_putchar('\\');
            char_non_printable(str[i]);
        } else {
            my_putchar(str[i]);
        }
    }
    return (0);
}