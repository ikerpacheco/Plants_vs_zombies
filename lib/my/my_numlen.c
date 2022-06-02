/*
** EPITECH PROJECT, 2021
** my_numlen
** File description:
** lengh of numbers
*/

#include "../../include/my.h"

int my_numlen(long nb)
{
    int counter = 0;

    while (nb != 0) {
        nb = nb / 10;
        counter++;
    }
    return counter;
}
