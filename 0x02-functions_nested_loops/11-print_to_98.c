#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from the given number to 98
 * @n: the number to begin counting from
 * Return: none
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(",");
				printf(" ");
			}
			n++;
		}
		printf("\n");
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(",");
				printf(" ");
			}
			n--;
		}
		printf("\n");
	}
}
