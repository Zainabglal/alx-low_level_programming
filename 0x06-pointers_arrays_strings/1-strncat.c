#include"main.h"
/**
 * _strncat - concatenates two strings together but
 * in range of n bytes from src
 * @dest: first part of the string
 * @src: second part of the string
 * @n: number of bytes of src to be concatenated
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;
	int z;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	z = dest [x];
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[z + y] = src[y];
		x++;
		y++;
	}
	dest[z + y] = '\0';
	return (dest);
}
