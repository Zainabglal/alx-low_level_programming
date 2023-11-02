#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialaze it
 * @size: number of elements in the array
 * @c: character to initialaze the array
 * Return: pointer to the initialized array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a = (char *)malloc(sizeof(char) * size);


	if (size == 0)
		return (NULL);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);

}
