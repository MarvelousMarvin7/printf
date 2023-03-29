#include "main.h"

/**
 * print_binary - convert unsigned int argument to binary and print
 * @list: va_list containing the unsigned int to print
 *
 * Return: number of characters printed
 */
int print_binary(va_list list)
{
	unsigned int n;
	int i, len = 0;
	int binary[32];

	n = va_arg(list, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; n > 0; i++)
	{
		binary[i] = n % 2;
		n /= 2;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(binary[i] + '0');
		len++;
	}

	return (len);
}
