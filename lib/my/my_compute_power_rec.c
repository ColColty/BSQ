/*
** EPITECH PROJECT, 2018
** MY_COMPUTE_POWER_REC
** File description:
** Display the power of a integer - recursive
*/

int recursive_power(int nb, int p, int power, int i)
{
    if (i < p) {
        power *= nb;
        i++;
        recursive_power(nb, p, power, i);
    } else
        return (power);
}

int test_negatif(int nb, int p)
{
    if (nb < 0)
        if (p % 2 == 1)
            return (-1);
    return (1);
}

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return (1);
    else if (p < 0)
        return (0);
    else
        return (recursive_power(nb, p, 1, 0) * test_negatif(nb, p));
}