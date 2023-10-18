#include "main.h"

/**
 * print_sign - prints the sign of a number and returns
 *
 * @c: the parameter to be checked for positive, negative, or zero
 *
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
