#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: the first address of value to be swapped
 * @b: the second address of value to be swapped
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
