#include "main.h"

/**
 * print_char - prints character
 * @print_f: containing the character to be printed
 * Return: number of character printed
 */
int print_char(va_list print_f)
{
	putchar(va_arg(print_f, int));
	return (1);
}
/**
 * print_string - prints a string
 * @print_f: containing the character to be printed
 * Return: string printed
 */
int print_string(va_list print_f)
{
	char *string = va_arg(print_f, char *);
	int i;

	if (!string)
		string = "(null)";

	for (i = 0; string[i]; i++)
		putchar(string[i]);
	return (i);
}
/**
 * print_percentage - identify modulos specifier
 * @print_f: containing the character to be printed
 * Return: where the print starts
 */
int print_percentage(va_list print_f)
{
	(void)print_f;

	putchar('%');
	return (1);
}
