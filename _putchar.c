#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints character
 * @c: character variable
 *
 * Return: 1 character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
