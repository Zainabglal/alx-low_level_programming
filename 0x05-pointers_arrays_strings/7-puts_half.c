#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to be operated
 * Return: none
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	for (j = i / 2; j < i; j++)
	{
		_putchar (str[j]);

	}
	_putchar('\n');
}
