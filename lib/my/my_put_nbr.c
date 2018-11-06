/*
** EPITECH PROJECT, 2018
** MY_PUT_NUMBER
** File description:
** Displays number given as a parameter
*/
int my_isneg(int nb);

void my_putchar(char c);

int my_put_nbr(int n)
{
    int div = 1000000000;
    int number;
    int eliminator = 0;
    long int n2 = n;

    if (n2 == 0)
        my_putchar(48);
    else {
        n2 *= my_isneg(n2);
        while (div != 0) {
            number = (n2 / div) % 10;
            if (eliminator == 0 && number == 0)
                eliminator = 0;
            else {
                my_putchar(number + 48);
                eliminator = 1;
            }
            div /= 10;
        }
    }
    return (0);
}
