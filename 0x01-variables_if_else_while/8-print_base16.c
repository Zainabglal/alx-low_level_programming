#include <stdio.h>

/**
 * main - entry point
 * Description: prints numbers
 * in base 16
 *
 * Return: always 0
 */
int main(void)
{
	int ch = 0;

	while (ch <= 15)
	{
		putchar (ch < 10 ? ch + '0' : ch - 10 + 'a');
		ch++;
	}
	putchar ('\n');
	return (0);
}
