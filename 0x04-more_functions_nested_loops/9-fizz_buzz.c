#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && !(a % 15 == 0))
			printf("Fizz");
		else if (a % 5 == 0 && !(a % 15 == 0))
			printf("Buzz");
		else if (a % 15 == 0)
			printf("FizzBuzz");

		else
		{
			if (a > 9)
				putchar(a / 10 + '0');
			putchar(a % 10 + '0');
		}
		if (a != 100)
			putchar(' ');
	}

	putchar('\n');
	return (0);
}
