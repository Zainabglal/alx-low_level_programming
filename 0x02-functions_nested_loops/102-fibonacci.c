#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i;
	int f = 0;
	int s = 1;
	int n = f + s;

	for (i = 3; i <= 50; i++)
	{
		printf("%d, ", n);
		if (i == 49)
			printf("%d\n", n);
		f = s;
		s = n;
		n = f + s;
	}
	return (0);
}
