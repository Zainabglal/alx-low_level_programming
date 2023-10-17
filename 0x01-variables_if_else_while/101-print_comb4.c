#include <stdio.h>

/**
 * main - entry point
 * Description: print a combination of three
 * digits
 *
 * Return: always 0
 */
int main(void)
{
	int x = 48;
	int y;
	int z;

	for (; x <= 57; x++)
	{
		for (y = x + 1; y < 57; y++)
		{
			for (z = x + 2; z <= 57; z++)
			{
				if (x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if ((x + y + z) != 168)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
	
}
