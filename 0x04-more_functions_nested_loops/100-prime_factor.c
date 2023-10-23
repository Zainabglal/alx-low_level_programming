#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long int m1 = 612852475143 / 1000000;
	long int m2 = 612852475143 % 1000000;
	long int a;

	for (a = 1; a < (m1 + m2); a++)
	{
		if ((m1 + m2) % a == 0)
			printf("%ld\n", a);
	}
	return (0);
}
