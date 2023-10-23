#include "main.h"
/**
 * print_triangle - prints a triangle of character #
 * @size: the base of triangle and number of lines to be printed
 * Return: none
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for ((b = size - a - 2); b >= 0 ; b--)
			{
				_putchar(' ');

			}
			for (c = size - a - 1; c < size; c++)
				_putchar('#');
			_putchar('\n');

		}
	}
	else
		_putchar('\n');
}
