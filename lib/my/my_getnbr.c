/*
** EPITECH PROJECT, 2018
** MY_GETNBR
** File description:
** Get a number in a string
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int signe = 1;
    int nombre = 0;

    for (i; str[i] != '\0'; i++) {
        if (str[i] == '-')
            signe *= -1;
        if (48 <= str[i] && str[i] <= 57) {
            nombre = nombre * 10 + (str[i] - 48);
            if (nombre >= 2147483646 && nombre <= -2147483646)
                return (0);
        } else
            return (signe * nombre);
    }
}
