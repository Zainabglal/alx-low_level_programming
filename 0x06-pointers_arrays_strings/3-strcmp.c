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

	for (i = 0; s1[i] == s2[i] && (s1[i] || s2[i] != '\0'); i++)
	{
		continue;
	}



	return (s1[i] - s2[i]);
}
