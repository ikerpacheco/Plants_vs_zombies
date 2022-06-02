/*
** EPITECH PROJECT, 2021
** MY_STRDUP
** File description:
** Allocates memory and returns copy
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    char *dest = malloc(len + 1);

    my_strcpy(dest, src);
    return dest;
}
