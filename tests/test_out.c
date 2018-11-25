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

Test(fs_open_file, test_a_simple_box, .init = redirect_all_std)
{
    fs_open_file("mouli_maps/intermediate_map_one_empty_box");
    cr_assert_stdout_eq_str("x\n");
}

Test(error_handler, test_unexisting_map, .init = redirect_all_std)
{
    int ret;

    ret = fs_open_file("map3.txt");
    cr_assert_eq(84, ret);
}

Test(error_handler, test_without_line_number, .init = redirect_all_std)
{
    int ret;

    ret = fs_open_file("mouli_maps/maps_without_line_number");
    cr_assert_eq(84, ret);
}

Test(error_handler, test_wihtout_number_in_line_number,
.init = redirect_all_std)
{
    int ret;

    ret = fs_open_file("mouli_maps/maps_without_number_in_first_line");
    cr_assert_eq(84, ret);
}

Test(error_handler, test_with_a_letter_in_number_field,
.init = redirect_all_std)
{
    int ret;

    ret = fs_open_file("mouli_maps/maps_with_letter_in_number_field");
    cr_assert_eq(84, ret);
}

Test(error_handler, test_a_letter_in_map, .init = redirect_all_std)
{
    int ret;

    ret = fs_open_file("mouli_maps/map_with_other_character");
    cr_assert_eq(84, ret);
}