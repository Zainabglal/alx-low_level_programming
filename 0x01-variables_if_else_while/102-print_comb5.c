#include <stdio.h>

/**
 * main - entry point
 * Dsscription: print two two digits combinations
 *
 * Return: always -
 */
int main(void)
{
	int w, x;

	for (w = 0; w < 100; w++)
	{
		for (x = 0; x < 100; x++)
		{
			if (((w / 10) + (w % 10)) < ((x / 10) + (x % 10)))
			{
				putchar(w / 10 + '0');
				putchar(w % 10 + '0');
				putchar(' ');
				putchar(x / 10 + '0');
				putchar(x % 10 + '0');
				if (w != 98 || x != 99)

				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
