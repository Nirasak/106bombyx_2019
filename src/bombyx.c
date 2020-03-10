/*
** EPITECH PROJECT, 2020
** bombyx.c
** File description:
** bombyx
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

void generation(char **av)
{
    double x = atoi(av[1]);
    int i = atoi(av[2]);
    int j = atoi(av[3]);

    for (double k = 100; k <= 400; k += 1) {
        x = atoi(av[1]);
        for (int l = 1; l <= j; l++) {
            if (l >= i)
                printf("%.2f %.2f\n", k / 100, x);
            x = k / 100 * x * (1000 - x) / 1000;
        }
    }
}

void growth_rate(char **av)
{
    double x = atof(av[1]);
    double k = atof(av[2]);

    for (int i = 1; i <= 100; i++) {
        printf("%d %.2f\n", i, x);
        x = k * x * (1000 - x) / 1000;
    }
}

int bombyx(int ac, char **av)
{
    if (ac == 3)
        growth_rate(av);
    else
        generation(av);
    return (0);
}
