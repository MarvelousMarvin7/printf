#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @list: arguments list
 *
 * Return: number of digits printed
 */
int print_unsigned(va_list list)
{
	unsigned int n;
	unsigned int tmp;
	int len = 0;

	n = va_arg(list, unsigned int);
	tmp = n;

	do {
		tmp /= 10;
		len++;
	} while (tmp);

	while (len--)
	{
		_putchar((n / _pow(10, len)) % 10 + '0');
	}

	return (len);
}

/**
 * print_octal - prints an octal number
 * @list: arguments list
 *
 * Return: number of digits printed
 */
int print_octal(va_list list)
{
	unsigned int n;
	int octal_num[100], i = 0, len = 0;

	n = va_arg(list, unsigned int);

    /* convert decimal to octal */
	while (n != 0)
	{
		octal_num[i] = n % 8;
		n = n / 8;
		i++;
	}
	len = i;

    /* print octal in reverse order */
	while (i--)
	{
		_putchar(octal_num[i] + '0');
	}

	return (len);
}

/**
 * print_hex - prints a hexadecimal number
 * @list: arguments list
 *
 * Return: number of digits printed
 */
int print_hex(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	int hex_num[100], i = 0, len = 0;

    /* convert decimal to hexadecimal */
	while (n != 0)
	{
		hex_num[i] = n % 16;
		n = n / 16;
		i++;
	}
	len = i;

    /* print hexadecimal in reverse order */
	while (i--)
	{
		if (hex_num[i] < 10)
			_putchar(hex_num[i] + '0');
		else
			_putchar(hex_num[i] - 10 + 'a');
	}

	return (len);
}

/**
 * print_heX - prints a hexadecimal number in uppercase
 * @list: arguments list
 *
 * Return: number of digits printed
 */
int print_heX(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	int hex_num[100], i = 0, len = 0;

    /* convert decimal to hexadecimal */
	while (n != 0)
	{
		hex_num[i] = n % 16;
		n = n / 16;
		i++;
	}
	len = i;

    /* print hexadecimal in reverse order */
	while (i--)
	{
		if (hex_num[i] < 10)
			_putchar(hex_num[i] + '0');
		else
			_putchar(hex_num[i] - 10 + 'A');
	}

	return (len);
}
