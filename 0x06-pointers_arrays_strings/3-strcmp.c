#include "main.h"
/**
 * _strcmp - comparison two strings
 * @s1: the first string to be comparisoned
 * @s2: the second string ton be comparisoned
 * Return: integer less, greater of equal to zero
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	if (s1 > s2)
		i = 15;
	else if (s1 < s2)
		i = -15;
	else
		i = 0;
	return (i);
}
