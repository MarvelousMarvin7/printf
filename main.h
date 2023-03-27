#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct print_fun - Struct print_fun
 *
 * @c: The format specifier
 * @f: The function pointer to corresponding print function
 */
typedef struct print_fun
{
    char type;
    int (*func)(va_list);
} print_func_t;

int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);

#endif /* MAIN_H */
