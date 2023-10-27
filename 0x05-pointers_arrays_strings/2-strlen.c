#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: the string to be checked
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != 0)
	{
		len++;
	}
	return (len);
}
