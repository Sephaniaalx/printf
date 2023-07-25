#include "main.h"
#include <stddef.h>
/**
 * print_character - prints a single character
 * @print_f: va_list containing the character to be printed
 * Return: number of character printed
 */
int print_char(va_list print_f)
{
	char print = va_arg(print_f, int);

	putchar(print);
	return (1);
}

/**
 * print_string - main func
 * @print_f: containing the string to be printed
 * Return: num of char to be outputed
 */
int print_string(va_list print_f)
{
	char *string = va_arg(print_f, char *);
	int i;

	if (string == NULL)
	{
		string = "(null)";
	}
	for (i = 0; string[i]; i++)
	{
		putchar(string[i]);
	}
	return (i);

}

/**
 * print_percentage - print a modulos sign
 * @print_f: unused
 * Return: the number of characters printed
 */
int print_percentage(__attribute__((unused)) va_list print_f)
{
	putchar('%');
	return (1);
}
