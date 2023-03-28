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
	/*int i, num, temp, power, digit, digits = 0, n = 0;

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
	*/
        char *str;
        int len = 0, i;
	int n;

	n = va_arg(list, int);

        if (n < 0) {
                _putchar('-');
                n = -n;
        }

        str = malloc(sizeof(char) * 10);

        do {
                str[len++] = (n % 10) + '0';
                n /= 10;
        } while (n);

        for (i = len - 1; i >= 0; i--)
                _putchar(str[i]);

        free(str);

        return len;
}
