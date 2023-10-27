#include "main.h"
/**
 * print_rev - prints the string reversely
 * @s: the parameter to be printed
 * Return: none
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{

		_putchar(s[i]);
	}
	_putchar('\n');
}
