#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int t, f;
	int sum = 0;
	int res = 0;

	for (t = 3; t < 1024; t += 3)
	{
		sum = sum + t;
	}
	for (f = 5; f < 1024; f += 5)
	{
		res = res + f;
	}
	printf("%d\n", sum + res);

	return (0);
}
