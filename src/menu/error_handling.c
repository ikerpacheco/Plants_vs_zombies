/*
** EPITECH PROJECT, 2022
** error_handling
** File description:
** error handling function
*/

#include "../../include/my.h"

int error_handling(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("Tower Defense Game inspired on Infinode V2 & PvZ\n");
        return 84;
    }
    if (ac != 1) {
        write(2, "There is too many arguments", 29);
        write(2, " type ./my_defender -h for usage\n", 35);
        return 84;
    }
    return 0;
}
