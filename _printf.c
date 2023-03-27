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
	int c, i, j, n = 0;
	int num, temp, digit, digit_count, track;

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
			else if (*format == 'd' || *format == 'i')
			{
				num = va_arg(list, int);
				if (num == 0)
				{
					putchar('0');
					n++;
				}
				else
				{
					if (num < 0)
					{
						putchar('-');
						n++;
					}
					temp = num;
					while (temp != 0)
					{
						digit_count++;
						temp /= 10;
					}
					temp = num;
					for(i = digit_count - 1; i >= 0; i--)
					{
						track = 1;
						for(j = 0; j < i; j++)
						{
							track *= 10;
						}
						digit = temp / track;
						temp -= temp * digit;
						putchar(digit + '0');
						n++;
					}
				}
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
