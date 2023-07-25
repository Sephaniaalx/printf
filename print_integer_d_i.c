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
<<<<<<< HEAD
		putchar('-');
		digits *= -1;
		len++;
	}
	else if (number == 0)
	{
		putchar('0');
		return (1);
=======
	putchar('-');
	num = -num;
	}
	do {
	num_digits++;
	temp /= 10;
	temp++;
	} while (temp != 0);
	for (i = num_digits - 1; i >= 0; i--)
	{
	int digit = num / power(10, i);

	num -= digit * power(10, i);
>>>>>>> 97cd9bc57c909c2fc18f045ed0961f8c02ba5c1a
	}
	len += help_integer(digits);
	return (len);
}

