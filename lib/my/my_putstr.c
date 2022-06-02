/*
** EPITECH PROJECT, 2021
** My_putstr
** File description:
** Prints string
*/

#include <stddef.h>

void my_putchar(char c);

void my_putstr(char const *str)
{
    int i = 0;

    if (str == NULL)
        return;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
