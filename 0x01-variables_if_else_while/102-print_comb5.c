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
	int x = 0;
	int y = 0;
	int z = 0;
	int a = (w + x + y + z);

	for (w = 0; w <= 9; w++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (y = 0; y <= 9; y++)
			{
				for (z = 0; z <= 9; z++)
				{
					if ((w + x) < (y + z))
					{
						putchar(w + '0');
						putchar(x + '0');
						putchar(' ');
						putchar(y + '0');
						putchar(z + '0');
						if (a != 35)
						{
							putchar(' ');
							putchar(',');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
