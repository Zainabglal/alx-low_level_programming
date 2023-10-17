#include <stdio.h>
/**
 * main -  entry point
 * Description: print a different combination
 * of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int x = 48;
	int y;

	for (; x <= 57; x++)
	{
		for (y = x + 1; y <= 57; y++)
		{
			if (x < y)
			{
				putchar(x);
				putchar(y);
				if ((x + y) != 113)
				{
					putchar(44);
					putchar(32);

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
