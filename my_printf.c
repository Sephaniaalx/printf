#include "main.h"
/**
 * _printf - prints anything, with specific formats for different data types
 * @format: a string of format specifiers for the data to be printed
 * @...: variable number of arguments that correspond to the format specifiers
 * Return: the total number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list print_f;
	size_t len = 0, i = 0;
	int j;
	int array_len;
	print format_funcs[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percentage},
		{'d', print_integer}, {'i', print_unsigned}};
	if (!format || (format[0] == '%' && format[1] == '\0'))
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
		} i++;
	}
	va_end(print_f);
	return (len);
}
