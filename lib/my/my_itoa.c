/*
** EPITECH PROJECT, 2021
** MY_CHAR_IS_LOWER
** File description:
** Checks if char is lower
*/

#include "../../include/my.h"

char *my_itoa(int nb)
{
    unsigned int len = my_numlen(nb);
    char *str = malloc(sizeof(char *) * len + 1);
    unsigned int i = len;

    str[i] = '\0';
    if (nb == 0)
        str[i] = '0';
    while (i > 0) {
        str[--i] = nb % 10 + '0';
        nb /= 10;
    }
    return str;
}
