/*
** EPITECH PROJECT, 2021
** MY_PRINT_DIGITS
** File description:
** Display digits, ascending order.
*/

void my_putchar(char c);

int my_print_digits(void)
{
    char digit = '0';

    while (digit < 58) {
        my_putchar(digit);
        digit++;
    }
    return (0);
}
