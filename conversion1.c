#include "main.h"
#include <stdio.h>

/**
 * print_char - prints a character
 * @list: va_list containing the character to be printed
 *
 * Return: number of characters printed
 */
int print_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	return (1);
}
/**
 * print_string - prints a string
 * @list: va_list containing the string to be printed
 *
 * Return: number of characters printed
 */
int print_string(va_list list)
{
	char *s;
	int n = 0;

	s = va_arg(list, char *);

	while (*s)
	{
		_putchar(*s);
		n++;
		s++;
	}

	return (n);
}
/**
 * print_percent - prints a percent symbol
 * @list: va_list (unused)
 *
 * Return: number of characters printed
 */
int print_percent(va_list list)
{
	(void) list;
	_putchar('%');
	return (1);
}
/**
 * unsigned_integer - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: a count of the numbers
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}
