/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** Get number from a string
*/

int getnbr_neg(int minus, int nombre)
{
    if (minus % 2 == 1 )
        nombre = nombre * -1;
    return (nombre);
}

int getnbr_limite1(int nombre, int taille_nbr, char const *str, int i)
{
    if (taille_nbr == 10 && str[i-1] > '8' && nombre < 0)
        return (0);
    else if (taille_nbr == 10 && str[i-1] >'7' && nombre > 0)
        return (0);
    else
        return (1);
}

int getnbr_limite2(int taille_nbr, int nombre)
{
    if (taille_nbr <= 10)
        return (nombre);
    else
        return (0);
}

int getnbr_return_nbr(int taille_nbr, int i, int nombre, char const *str)
{
    int resultat=0;

    if (getnbr_limite1(nombre, taille_nbr, str, i) == 0)
        return (0);
    resultat = getnbr_limite2(taille_nbr, nombre);
    return (resultat);
}

int my_getnbr(char const *str)
{
    int compteur=0;
    int nombre=0;
    int taille_nbr=0;
    int minus=0;

    for (compteur; str[compteur] != '\0'; compteur++) {
        if (str[compteur] == 45)
            minus++;
        if (str[compteur] != '-' && str[compteur] != '+')
            if (str[compteur] < '0' || str[compteur] > '9')
                break;
        if (str[compteur] >= '0' && str[compteur] <= '9') {
            nombre = nombre * 10 + (str[compteur] - 48);
            taille_nbr++;
        }
    }
    nombre = getnbr_neg(minus, nombre);
    return (getnbr_return_nbr(taille_nbr, compteur, nombre, str));
}
