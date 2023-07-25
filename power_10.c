#include "main.h"

/**
 * power - this function is a helper function
 * @base: bottom number
 * @exponent: upper number
 * Return: result
 */

int power(int base, int exponent)
{
	int result = 1;
	int i;

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}
