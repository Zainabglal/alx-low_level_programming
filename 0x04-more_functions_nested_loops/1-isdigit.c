#include "main.h"
/**
 * _isdigit - checks if a value is digit
 * @c: the parameter to be checked
 * Return: 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 75)
		return (1);
	else
		return (0);
}
