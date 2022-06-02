/*
** EPITECH PROJECT, 2021
** MY_CHAR_IS_LOWER
** File description:
** Checks if char is lower
*/

int my_char_isupper(char c)
{
    if (c < 91 && 64 < c) {
        return 1;
    } else {
        return 0;
    }
}
