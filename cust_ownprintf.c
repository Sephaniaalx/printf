#include "main.h"

/**
 * _printf - the main print function
 * @format: The formatted string
 * Return: the number of characters printed except for null
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	conversion_func conversions[] = {handle_thechar,
		handle_thestring, handle_thepercent};
	while (*format != '\0')
	{
	if (*format == '%')
	{
	format++;
	}
	for (int i = 0; i < sizeof(conversions) / sizeof(conversions[0]; i++)
	{
	if (*format == "cs%"[i]
	{
	conversions[i](args);
	count++;
	break;
	}
	}
	else
	{
	print_thechar(*format);
	count++;
	}
	format++;
	}
	va_end(args);
	return (count);
}
