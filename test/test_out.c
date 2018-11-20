/*
** EPITECH PROJECT, 2018
** Test criterion bsq
** File description:
** test criterion du bsq
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(fs_open_file, test01, .init = redirect_all_std)
{
    fs_open_file("mouli_maps/testing_map");
    cr_assert_stdout_eq_str("xxxx.o\nxxxx.o\nxxxxo.\nxxxx.o\no...o.\n");
}

Test(fs_open_file, test04, .init = redirect_all_std)
{
    fs_open_file("map3.txt");
}