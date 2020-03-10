/*
** EPITECH PROJECT, 2020
** error.c
** File description:
** error
*/

#include <stdlib.h>
#include "my.h"

bool my_strisnum(char *str)
{
    int i = 0;

    for (; str[i] == '-'; i++);
    for (; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return (false);
    return (true);
}

bool my_strisfloat(char *str)
{
    int i = 0;

    for (; str[i] == '-'; i++);
    for (; str[i] != '\0'; i++)
        if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
            return (false);
    return (true);
}

bool check_error(int ac, char **av)
{
    if (ac < 3 || ac > 4)
        return (false);
    if (my_strisnum(av[1]) == false || my_strisfloat(av[2]) == false
        || atoi(av[1]) < 0)
        return (false);
    if (ac == 3 && (atof(av[2]) < 1 || atof(av[2]) > 4))
        return (false);
    if (ac == 4 && ((my_strisnum(av[2]) == false || my_strisnum(av[3]) == false)
                    || atoi(av[2]) > atoi(av[3]) || atoi(av[2]) <= 0))
        return (false);
    return (true);
}
