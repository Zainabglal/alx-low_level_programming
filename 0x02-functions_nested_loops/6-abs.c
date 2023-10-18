#include "main.h"

/**
 * _abs - print the absolute value of a given number
 *
 * @num: the integer to be compared
 * Return: absolute result
 */

int _abs(int num)
{
	if ((num * (-1)) >= 1)
		return (num * (-1));
	else
		return (num);
}
