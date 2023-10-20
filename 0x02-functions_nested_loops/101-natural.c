#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int t;
	int sum = 0;

	for (t = 0; t < 1024; t++)
		if ((t % 3) == 0 || (t  % 5) == 0)
			sum = sum + t;
	printf("%i\n", sum);

	return (0);
}
