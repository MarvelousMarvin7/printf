#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct conversion - struct for format
 * @sym: format to print
 * @f: pointer to function to print
 */
typedef struct conversion
{
	char *sym;
	int (*f)(va_list);
} conver_t;

int _printf(const char *format, ...);
int _putchar(char c);
int parser(const char *format, conver_t f_list[], va_list list);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_int(va_list list);
int print_binary(va_list list);
int print_unsigned(va_list list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
int _pow(int base, int exp);

#endif /* MAIN_H */
