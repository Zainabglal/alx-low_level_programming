#include "main.h"
/**
 * string_toupper - turn all characters to upper case
 * @s: the string to be turned to upper case
 * Return: upper case string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		else
			s[i] = s[i];

	}
	return (s);
}
