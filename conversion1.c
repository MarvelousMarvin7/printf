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
	return (_putchar(c));
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
	int i = 0;

	s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}
/**
 * print_percent - prints a percent symbol
 * @list: va_list (unused)
 *
 * Return: number of characters printed
 */
int print_percent(va_list list)
{
	(void)list;
	return (_putchar('%'));
}
