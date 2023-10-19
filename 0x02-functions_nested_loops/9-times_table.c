#include "main.h"

/**
 * times_table - print the 9 times table
 *Return: none.
 */
void times_table(void)
{
	int a = 0;
	int b;
	int r;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			r = (a * b);

			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (r <= 9 && b!= 0 ) 
			{
				_putchar(' ');
				_putchar(r + '0');
			}
			else if (r > 9)
			{
				_putchar(r / 10 + '0');
				_putchar(r % 10 +'0');
			}
			else 
				_putchar(r + '0');
			b++;
		}
		_putchar('\n');
		a+=1;
	}

}
