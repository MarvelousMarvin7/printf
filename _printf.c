#include "main.h"
#include <stdio.h>

/**
 * _printf - produce output according to format
 * @format: format to be used
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	char *s;
	int c, n = 0;

	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(list, int);
				putchar(c);
				n++;
			}
			else if (*format == 's')
			{
				s = va_arg(list, char *);
				while (*s)
				{
					putchar(*s++);
					n++;
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				n++;
			}
		}
		else
		{
			putchar(*format);
			n++;
		}
		format++;
	}
	va_end(list);
	return (n);
}
