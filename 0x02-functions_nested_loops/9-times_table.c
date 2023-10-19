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
			/*else if (b <= 4 && a <= 2)
			{
				_putchar(' ');
			}*/
			if (r <= 9)
			{
				_putchar(' ');
				_putchar(r + '0');
			}
			else if (r > 9)
			{
				_putchar(r / 10 + '0');
				_putchar(r % 10 +'0');
			}
			
			/**if ((r / 10) < 1)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}*/

			b++;
		}
		_putchar('\n');
		a+=1;
	}

}
