#include <stdio.h>

/**
 * main - entry point
 * Description: prints the alphabets
 * reverlely
 *
 * Return: Always 0
 */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar (ch);
		ch--;
	}
	putchar ('\n');
	return (0);
}
