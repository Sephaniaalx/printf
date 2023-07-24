#ifndef _MAIN_H
#define _MAIN_H

/**
 * all prototypes and header files 
 * are included in this main file
 */

/**
 * below are few system header files
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * below are actual prototypes
 */

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list print_f);
int print_percentage(va_list print_f);
int print_string(va_list print_f);

/**
 * im using this struct
 */

typedef struct printing_theformat
{
	char specialchar;
	int (*print)(va_list print_f);
} print;

#endif
