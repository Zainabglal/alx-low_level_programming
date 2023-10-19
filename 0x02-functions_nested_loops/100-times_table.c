#include "main.h"
/**
 * print_times_table - prints the times table of any number betweeb 0 and 15
 * @n: the times table parameter
 * Return: none
 */
void print_times_table(int n)
{
	int a, b;

	if (n < 0 || n > 15)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			if (b != 0)
			{	_putchar(',');
				_putchar(' ');
			}
			if ((a * b) <= 9 && b != 0)
			{	_putchar(' ');
				_putchar(' ');
				_putchar((a * b) + '0');
			}
			else if ((a * b) <= 9 && b == 0)
				_putchar((a * b) + '0');
			if ((a * b) > 9 && (a * b) < 100)
			{	_putchar(' ');
				_putchar(((a * b) / 10) + '0');
				_putchar(((a * b) % 10) + '0');
			}
			if ((a * b) >= 100)
			{	_putchar(((a * b) / 100) + '0');
				_putchar((((a * b) % 100) / 10) + '0');
				_putchar(((a * b) % 10) + '0');
			}}
		_putchar('\n');
		}
}
