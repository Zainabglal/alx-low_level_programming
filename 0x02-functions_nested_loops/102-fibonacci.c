#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long int i;
	long int f = 0;
	long int s = 1;
	long int n = f + s;

	for (i = 3; i <= 52; i++)
	{
		printf("%ld", n);
		if (i != 52)
			printf(", ");
		else
			printf("\n");
		f = s;
		s = n;
		n = f + s;
	}
	return (0);
}
