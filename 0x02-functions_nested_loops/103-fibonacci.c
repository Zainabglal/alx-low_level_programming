#include <stdio.h>

/**
 * main - entry point
 * print the sum of even  numbers on fibonacci less than
 * 4000000
 * Return: 0
 */
int main(void)
{
	int i;
	long int ft = 0;
	long int sd = 1;
	long int nt  = ft + sd;
	long int sum = 0;

	for (i = 0; i <= 31; i++)
	{
		ft = sd;
		sd = nt;
		nt = ft + sd;
		if (nt % 2 == 0)
			sum = sum + nt;
	}
	printf("%ld\n", sum);
	return (0);
}
