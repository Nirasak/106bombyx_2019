/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include <string.h>
#include <stdio.h>
#include "my.h"

int print_descr(char *exe)
{
    printf("USAGE\n\t%s n [k | i0 i1]\n\n", exe);
    printf("DESCRIPTION\n\tn\tnumber of first generation individuals\n");
    printf("\tk\tgrowth rate from 1 to 4\n");
    printf("\ti0\tinitial generation (included)\n");
    printf("\ti1\tfinal generation (included)\n");
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 2 && strcmp(av[1], "-h") == 0)
        return (print_descr(av[1]));
    if (check_error(ac, av) == false)
        return (84);
    return (bombyx(ac, av));
}
