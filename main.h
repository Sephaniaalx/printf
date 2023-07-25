#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * _printf - main printf prototype
 * *print - the pointer to char
 * @format: - the last known argument
 * Return: returns character from
 */

int _printf(const char *format, ...);
int print_char(va_list print_f);
int print_percentage(va_list print_f);
int print_string(va_list print_f);
int power(int base, int exponent);
int print_integer(va_list print_f);
int print_unsigned(va_list print_f);
/**
 * struct printing_theformat - main
 * @print: the pointer
 * @specialchar: the fuction description
 */

typedef struct printing_theformat
{
	char specialchar;
	int (*print)(va_list print_f);
} print;

#endif
