#include "main.h"

/**
 * _printf – main function
 * @format: The format stringsing
 * Return: The number of character
 */
int _printf(const char *format, ...)
{
	va_list print_format;
	int char_count = 0;
	char c;
	char strings;
	int number;

	va_start(print_format, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = va_arg(print_format, int);
					_putchar(c);
					char_count++;
					break;
				case 's':
					strings = va_arg(print_format, char*);
					if (strings == NULL)
						strings = "(null)";
					while (strings)
					{
						_putchar(strings);
						strings++;
						char_count++;
					}
					break;
				case 'd':
				case 'i':
					number = va_arg(print_format, int);
					if (number < 0)
					{
						_putchar('-');
						char_count++;
						number = -number;
					}
					char_count += print_integer(number);
					break;
				case '%':
					_putchar('%');
					char_count++;
					break;
				default:
					_putchar('%');
					_putchar(*format);
					char_count += 2;
					break;
			}
		}
		else
		{
			_putchar(*format);
			char_count++;
		}

		format++;
	}

	va_end(print_format);
	return (char_count);
}

/**
 * print_integer - main function that Print an integer
 * @number: The integer to print
 * Return: The numberber of characters printed
 */
int print_integer(int number)
{
	int char_count = 0;
	int temp = number;

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	while (temp != 0)
	{
		temp /= 10;
		char_count++;
	}

	print_numberber_recursive(number);
	return (char_count);
}

/**
 * print_numberber_recursive - main function
 * @number: The numberber to print
 */
void print_numberber_recursive(int number)
{
	if (number == 0)
		return;

	print_numberber_recursive(number / 10);
	_putchar('0' + (number % 10));
}
