/*
** EPITECH PROJECT, 2018
** MY_IS_PRIME
** File description:
** Returns 1 if number is prime and 0 if not
*/

int my_is_prime(int nb)
{
    int i = 2;

    for (i; i < nb; i++)
        if (nb % i == 0)
            return (0);
    return (1);
}