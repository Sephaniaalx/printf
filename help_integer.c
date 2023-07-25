#include "main.h"

/**
 * help_integer - the main integer function to handle
 * @entry: the value
 * Return: output an integer
 */

int help_integer(unsigned int entry)
{
	int len;

	if (entry == 0)
	{
		return (0);
	}
	len = (1 + help_integer(entry / 10));
	putchar(entry % 10 + '0');
	return (len);
}
