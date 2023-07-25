#include "main.h"

/**
 * print_integer - the integer function
 * @print_f: the function parameter
 * Return: returns the number digits
 */

int print_integer(va_list print_f)
{
	int number = va_arg(print_f, int), len = 0;
	unsigned int digits = number;

	if (number < 0)
	{
		putchar('-');
		digits *= -1;
		len++;
	}
	else if (number == 0)
	{
		putchar('0');
		return (1);
	}
	len += help_integer(digits);
	return (len);
}
