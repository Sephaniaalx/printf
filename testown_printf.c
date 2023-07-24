#include "main.h"
/**
 * _printf - main code
 * @format: the specifier printer
 * Return: returns a char string
 *
 */

int _printf(const char *format, ...)
{
	va_list print_f;
	size_t len = 0, i = 0;int j;int array_len;
	print format_funcs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage}
	};

	if (format == NULL)
		return (-1);

	va_start(print_f, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			len++;
		}
		else
		{
			i++;
			array_len = sizeof(format_funcs) / sizeof(format_funcs[0]);
			for (j = 0; j < array_len; j++)
			{
				if (format[i] == format_funcs[j].specialchar)
				{
					len += format_funcs[j].print(print_f);
					break;
				}
			}
			if (format[i] != format_funcs[j].specialchar)
			{
				putchar(format[--i]);
				len++;
			}
		}i++;
	}
	va_end(print_f);
	return (len);
}
