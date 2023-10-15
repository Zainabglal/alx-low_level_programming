#include <stdio.h>

/**
 * main - entry point
 * Description: print alphabets in lower
 * and upper case
 *
 * Return: Always 0
 */
int main(void)
{
	char small = 'a';
	char cap = 'A';

	while (small <= 'z' && cap <= 'Z')
	{
		putchar (small);
		small++;
	}
	while (cap <= 'Z')
	{
		putchar (cap);
		cap++;
	}
	putchar ('\n');
	return (0);
}
