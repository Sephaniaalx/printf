#include "main.h"
/**
 * print_unsigned - the main function for decimals
 * Return: number of counts
 */

int print_unsigned(va_list print_f)
{
    unsigned int num = va_arg(print_f, unsigned int);
    unsigned int num_digits = 0;
    unsigned int temp = num;
    unsigned int i;

    do {
        num_digits++;
        temp /= 10;
    } while (temp != 0);

    for (i = num_digits; i > 0; i--) {
        unsigned int digit = num / power(10, i - 1);
        putchar('0' + digit);
        num -= digit * power(10, i - 1);
    }
    return (num_digits);
}
