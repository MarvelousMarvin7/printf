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
	int i = 0, j = 0, n = 0;
	print_func_t print_func[] = {

		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{0, NULL}
	};

	va_start(list, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (print_func[j].type)
			{
				if (format[i + 1] == print_func[j].type)
				{
					n += print_func[j].func(list);
					i++;
					break;
				}
				j++;
			}
		}
		else
		{
			putchar(format[i]);
			n++;
		}
		i++;
	}
	va_end(list);

	return (n);
}
