#include "main.h"
/**
 * print_unsigned - the main function for decimals
 * Return: number of counts
 * @print_f: our function parameter
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

for (i = num_digits; i > 0; i--)
{
unsigned int digit = num / power(10, i - 1);
	 putchar('0' + digit);
	num -= digit * power(10, i - 1);
}
return (num_digits);
}
/**
 * count_digits - main function to count
 * Return: numbers of digits
 * @num: parameter
 */
unsigned int count_digits(unsigned int num)
{
	unsigned int num_digits = 0;
	unsigned int temp = num;

	if (num == 0)
	{
		return (1);
	}
	while (temp != 0)
	{
		num_digits++;
		temp /= 10;
	}
	return (num_digits);
}
