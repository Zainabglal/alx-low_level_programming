#include <stdio.h>

/**
 * main - entry point
 * Description: Fucnction prints numbers from
 * zero to nine
 *
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);

	printf("\n");
	return (0);
}
