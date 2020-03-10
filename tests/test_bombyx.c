/*
** EPITECH PROJECT, 2020
** test_bombyx.c
** File description:
** test bombyx
*/

#include <stdlib.h>
#include <criterion/criterion.h>
#include "my.h"

Test(bombyx, test_one)
{
    char **av = malloc(sizeof(char *) * 4);

    av[1] = strdup("0");
    av[2] = strdup("1");
    av[3] = strdup("3");
    cr_assert_eq(check_error(4, av), 1);
    cr_assert_eq(bombyx(4, av), 0);
}

Test(bombyx, test_two)
{
    char **av = malloc(sizeof(char *) * 4);

    av[1] = strdup("3");
    av[2] = strdup("10");
    av[3] = strdup("3");
    cr_assert_eq(check_error(4, av), 0);
}

Test(bombyx, test_three)
{
    char **av = malloc(sizeof(char *) * 4);

    av[1] = strdup("3");
    av[2] = strdup("-2");
    av[3] = strdup("3");
    cr_assert_eq(check_error(4, av), 0);
}

Test(bombyx, test_four)
{
    char **av = malloc(sizeof(char *) * 4);

    av[1] = strdup("30000");
    av[2] = strdup("10");
    av[3] = strdup("30");
    cr_assert_eq(check_error(4, av), 1);
    cr_assert_eq(bombyx(4, av), 0);
}

Test(bombyx, test_five)
{
    char **av = malloc(sizeof(char *) * 4);

    av[1] = strdup("3");
    av[2] = strdup("0");
    av[3] = strdup("3");
    cr_assert_eq(check_error(4, av), 0);
}

Test(bombyx, test_six)
{
    char **av = malloc(sizeof(char *) * 3);

    av[1] = strdup("3");
    av[2] = strdup("0");
    cr_assert_eq(check_error(3, av), 0);
}

Test(bombyx, test_seven)
{
    char **av = malloc(sizeof(char *) * 3);

    av[1] = strdup("3");
    av[2] = strdup("6");
    cr_assert_eq(check_error(3, av), 0);
}

Test(bombyx, test_eight)
{
    char **av = malloc(sizeof(char *) * 3);

    av[1] = strdup("3");
    av[2] = strdup("3");
    cr_assert_eq(check_error(3, av), 1);
    cr_assert_eq(bombyx(3, av), 0);
}

Test(bombyx, test_bonus_one)
{
    char **av = malloc(sizeof(char *) * 3);

    av[1] = strdup("bonjour");
    av[2] = strdup("+8");
    cr_assert_eq(check_error(3, av), 0);
}

Test(bombyx, test_bonus_two)
{
    char **av = malloc(sizeof(char *) * 3);

    av[1] = strdup("+8");
    av[2] = strdup("bonjour");
    cr_assert_eq(check_error(3, av), 0);
}

Test(bombyx, test_bonus_three)
{
    char **av = malloc(sizeof(char *) * 3);

    av[1] = strdup("8");
    av[2] = strdup("0.8bonjour");
    cr_assert_eq(check_error(3, av), 0);
}

Test(bombyx, test_bonus_four)
{
    cr_assert_eq(check_error(0, NULL), 0);
}

Test(bombyx, test_bonus_five)
{
    cr_assert_eq(check_error(7, NULL), 0);
}

Test(bombyx, test_bonus_six)
{
    char **av = malloc(sizeof(char *) * 4);

    av[1] = strdup("8");
    av[2] = strdup("8");
    av[3] = strdup("bonjour");
    cr_assert_eq(check_error(4, av), 0);
}

Test(bombyx, test_bonus_seven)
{
    char **av = malloc(sizeof(char *) * 4);

    av[1] = strdup("8");
    av[2] = strdup("bonjour");
    av[3] = strdup("8");
    cr_assert_eq(check_error(4, av), 0);
}

Test(bombyx, test_bonus_eight)
{
    char **av = malloc(sizeof(char *) * 4);

    av[1] = strdup("8");
    av[2] = strdup("bonjour");
    av[3] = strdup("bonjour");
    cr_assert_eq(check_error(4, av), 0);
}
