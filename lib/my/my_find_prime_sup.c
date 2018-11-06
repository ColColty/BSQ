/*
** EPITECH PROJECT, 2018
** MY_FIND_PRIME_SUP
** File description:
** Find the prime number superior at the input
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int i = 2;
    int j = 1;

    if (my_is_prime(nb))
        return (nb);
    for (i; i < nb; i++) {
        if ((nb + j) % i == 0) {
            j++;
            i = 2;
        } else
            return (nb + j);
    }
    return (0);
}