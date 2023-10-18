#include "main.h"

/**
 * _abs - compute absolute value
 * @num: parameter of absolute
 * Return: the absolute value
 */
int _abs(int num)
{
	if ((num * (-1)) >= 1)
		return (num * (-1));
	else
		return (num);
}

/**
 * print_last_digit - prints the last digit of a given number
 * @l: parameter of calculation
 * Return: the last digit
 */
int print_last_digit(int l)
{
	int mod = (l % 10);

	_putchar(_abs(mod) + '0');
	return (_abs(mod));
}
