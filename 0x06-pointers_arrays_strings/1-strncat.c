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

	if (!dest || !src)
		return ("");
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
