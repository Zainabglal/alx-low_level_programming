#include "main.h"
/**
 * reverse_array - reverses the position of integers in an array
 * @a: the array to be reversed
 * @n: number of elements to be reversed
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
