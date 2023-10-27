#include "main.h"
/**
 * _puts - prints a string
 * @str: the string to be printed
 * Return: none
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
