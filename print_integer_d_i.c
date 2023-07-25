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
	int num = va_arg(print_f, int);
	int num_digits = 0;
	int temp = num;
	int i;

	if (num < 0)
	{
	putchar('-');
	num = -num;
	}
	do {
	num_digits++;
	temp %= 10;
	} while (temp != 0);
	for (i = num_digits - 1; i >= 0; i--)
	{
	int digit = num / power(10, i);

	num -= digit * power(10, i);
	}
	return (num_digits);
}

