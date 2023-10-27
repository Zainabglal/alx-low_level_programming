#include "main.h"

/**
 * _strcpy - copies the string of a variable into another variable
 * @dest: the destination of string to be copied in
 * @src: the source of the string to be copied from
 * Return: the destination value
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
