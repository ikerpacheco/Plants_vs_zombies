/*
** EPITECH PROJECT, 2021
** MY_STRNCMP
** File description:
** Compares the size of two strings
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while ((s1[i] == s2[i] && s1[i] != '\0') && s2[i] != '\0') {
        i++;
    }
    return (s1[i] - s2[i]);
}
