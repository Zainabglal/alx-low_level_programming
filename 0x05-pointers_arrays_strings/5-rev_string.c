#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the address of string to be reversed
 * Return: none
 */
void rev_string(char *s)
{
	int len, count, temp;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (count = 0; count < len / 2; count++)
	{
		temp = s[count];
		s[count] = s[len - count - 1];
		s[len - count - 1] = temp;
	}
}
