#include "main.h"

/**
 * print_thechar: will print a single character
 * print_thestring: will print a string
 * handle_thechar: handles character
 * handle_thestring: handles string
 * handle_thepercent: handle the percentage
 */

static void print_thechar(char c)
{
	_putchar(c);
}

static void print_thestring(const char* str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}

static void handle_thechar(va_list args)
{
	char c = (char)va_arg(args, int);
	print_thechar(c);
}

static void handle_thestring(va_list args)
{
	const char* str = va_arg(args, const char*);
	print_thestring(str);
}

static void handle_thepercentage(va_list args)
{
	print_thechar('%');
}
