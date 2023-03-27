#include "main.h"

/**
 * _printf - produce output according to format
 * @format: format to be used
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, n = 0;

	va_start(list, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				n += print_char(list);
			else if (format[i] == 's')
				n += print_string(list);
			else if (format[i] == 'd' || format[i] == 'i')
				n += print_int(list);
			else if (format[i] == '%')
				n += print_percent(list);
		}
		else
		{
			_putchar(format[i]);
			n++;
		}
		i++;
	}

	va_end(list);

	return (n);
}
