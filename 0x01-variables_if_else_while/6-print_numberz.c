#include <stdio.h>

/**
 * main - entry point
 * Description: same as before with
 * different method
 *
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar (48 + a);
	putchar ('\n');
	return (0);
}
