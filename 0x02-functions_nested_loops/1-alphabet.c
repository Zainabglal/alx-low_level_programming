#include "main.h"
/**
 * print_alphabet - print from a to z
 * Description: print_alphabet prints the alphabet from a to z in lowercase
 * to the standaed output using _putchar function
 */
void print_alphabet(void)
{
	int a = 97;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
