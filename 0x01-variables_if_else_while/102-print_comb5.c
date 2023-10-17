#include <stdio.h>

/**
 * main - entry point
 * Dsscription: print two two digits combinations
 *
 * Return: always -
 */
int main(void)
{
	int w = 0;
	int x;

	while (w <= 99)
	{
		x = w;
		while (x <= 99)
		{
			if (w != x)
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
			x++;
		}
		w++;
	}
	putchar('\n');
	return (0);
}
