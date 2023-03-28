#include "main.h"
#include <stdlib.h>

/**
 * print_int - Print an integer to stdout
 * @list: A va_list containing the integer to print
 *
 * Return: The number of characters printed
 */
int print_int(va_list list)
{
	int num, digits = 0, n = 0, power, i, digit, temp;

	num = va_arg(list, int);

	if (num < 0)
	{
		_putchar('-');
		n++;
		num = -num;
	}

	temp = num;
	do {
		digits++;
		temp /= 10;
	} while (temp);

	while (digits > 0)
	{
		power = 1;
		for (i = 1; i < digits; i++)
		{
			power *= 10;
		}
		digit = (num / power) % 10;
		_putchar('0' + digit);
		n++;
		digits--;
	}

	return (n);
}
/**
 * print_unsgined_number - Prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: The amount of numbers printed
 */
int print_unsgined_number(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
