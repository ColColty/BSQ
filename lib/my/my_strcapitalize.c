/*
** EPITECH PROJECT, 2018
** MY_STR-CAPITALIZE
** File description:
** Capitalize all the words
*/

int my_is_alphanumeric_cap(char c)
{
    if (my_str_isalpha(c)) {
        return (1);
    } else if (my_str_isnum(c)) {
        return (1);
    }
    return (0);
}

char *my_strcapitalize(char *str)
{
    int i;

    str = my_strlowcase(str);
    for (i = 0; str[i] != '\0'; i++) {
        if (my_is_alphanumeric_cap(str[i])) {
            my_putchar(str[i]);
        } else {
            my_putchar(my_strupcase(str[i + 1]));
        }
    }
    return (0);
}

int main(void)
{
    my_strcapitalize("helLo MY-name is 23TOMas");
    return (0);
}