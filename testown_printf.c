#include "main.h"
/**
 * _printf - main code
 *
 */

int _printf(const char *format, ...)
{
	size_t len = 0, i = 0;

	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		putchar(format[i++]);
		len++;
	}
	return (len);
}
