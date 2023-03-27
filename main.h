#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct print_fun - Struct print_fun
 *
 * @type: The format specifier
 * @func: The function pointer to corresponding print function
 */
typedef struct print_fun
{
	char type;
	int (*func)(va_list);
} print_func_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);

#endif /* MAIN_H */
