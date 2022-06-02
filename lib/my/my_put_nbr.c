/*
** EPITECH PROJECT, 2021
** MY_PUT_NBR
** File description:
** I dunno
*/
#include <limits.h>

void my_putchar(char c);

int if_negative(int nb)
{
    my_putchar('-');
    nb = nb * -1;
    return nb;
}

void printing_my_nbr(int nb)
{
    if (nb <= 9) {
        my_putchar(nb + 48);
        return;
    }
    printing_my_nbr(nb / 10);
    printing_my_nbr(nb % 10);
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        nb = if_negative(nb);
    }
    printing_my_nbr(nb);
    return 0;
}
