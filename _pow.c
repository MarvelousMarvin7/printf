#include "main.h"

/**
 * _pow - computes the power of a number
 * @base: the base number
 * @exp: the exponent
 *
 * Return: the result of base raised to the power of exp
 */
int _pow(int base, int exp)
{
	int result = 1;

	while (exp--)
	{
		result *= base;
	}

	return (result);
}
