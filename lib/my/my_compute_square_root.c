/*
** EPITECH PROJECT, 2018
** SQUARE ROOT
** File description:
** Give the square root of an argument
*/

int my_compute_square_root(int nb)
{
    int i;

    if (nb <= 0) {
        return (0);
    }
    for (i = 1; i <= nb; i++) {
        if (my_compute_power_rec(i, 2) == nb) {
            return (i);
        }
        i++;
    }
    return (0);
}