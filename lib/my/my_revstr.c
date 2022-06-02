/*
** EPITECH PROJECT, 2021
** MY_REVSTR
** File description:
** Reverses string
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int i = 0;
    int len = my_strlen(str);
    char tmp;

    while (i < len) {
        len--;
        tmp = str[len];
        str[len] = str[i];
        str[i] = tmp;
        i++;
    }
    return str;
}
