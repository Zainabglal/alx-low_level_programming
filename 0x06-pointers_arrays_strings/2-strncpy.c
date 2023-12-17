#include "main.h"
/**
 * _strncpy - copies a string from src to dest within n bytes
 * @dest: the destination of the copied string
 * @src: the string to be copied
 * @n: the number of bytes to be copied to dest
 * Return: final copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
