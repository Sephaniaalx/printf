#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <math.h>
/**
* print_integer - The function to print integers
* @print_f: prints the number digits
* Return: A digit value
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

