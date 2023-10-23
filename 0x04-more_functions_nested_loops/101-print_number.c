#include "main.h"
/**
 * print_number - prints an integer
 * @n: the number to be printed
 * Return: nothing
 */
void print_number(int n)
{

	if (n < 0)
		_putchar('-');
	_putchar (n % 10 + '0');
	if (n < 9)
		_putchar (n / 10 + '0');


}
