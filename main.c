/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "include/my.h"

int main(int ac, char **av)
{
    if (error_handling(ac, av) == 84)
        return 84;
    else
        my_defender();
    return 0;
}
