#include "main.h"
/**
 * print_line - prints line according to n
 * @n: the length of line
 * Return: nothing
 */
void print_line(int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		if (n > 0)
			_putchar(95);
	}
	_putchar('\n');
}
