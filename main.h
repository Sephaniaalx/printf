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

/**
 * thus are the handler and the specifier prototypes
 */
static void print_thechar(char c);
static void print_thestring(const char* str);
static void handle_thechar(va_list args);
static void handle_thestring(va_list args);
static void handle_thepercent(va_list args);

typed void (*conversion_func)(va_list);

#endif
