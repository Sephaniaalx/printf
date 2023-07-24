#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - Print formatted output function to stdout
 * @format: Formatted strings for printing
 * Return: The number of characters printed except '\0'.
 */
int _printf(const char *format, ...)
{
va_list formated_character;
	int character_counter = 0;
	char c;
	char *strings;

	va_start(formated_character, format);
	while (*format)
	{
	if (*format == '%')
	{
	format++;
	switch (*format)
	{
	case 'c':
	c = va_arg(formated_character, int);
	_putchar(c);
	character_counter++;
	break;
	case 's':
	strings = va_arg(formated_character, char*);
	if (strings == NULL)
	strings = "(null)";
	while (*strings)
	{
	_putchar(*strings);
	strings++;
	character_counter++;
	}
	break;
	case '%':
	_putchar('%');
	character_counter++;
	break;
	default:
	_putchar('%');
	_putchar(*format);
	character_counter += 2;
	break;
	}
	}
	else
	{
	_putchar(*format);
	character_counter++;
	}
	format++;
	}
	va_end(formated_character);
	return (character_counter);
}
