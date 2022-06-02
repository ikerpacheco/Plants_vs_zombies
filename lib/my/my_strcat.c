/*
** EPITECH PROJECT, 2021
** MY_STR_CAT
** File description:
** Concatenates two strings
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0') {
        dest[len] = src[i];
        i++;
        len++;
    }
    return dest;
}
