#include"main.h"
/**
 * _strcat - the function returning the concatenated string
 * @dest: the first part of string
 * @src: the second part of the string to be appended
 * to the first part
 * Return: pointer to the result string
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
