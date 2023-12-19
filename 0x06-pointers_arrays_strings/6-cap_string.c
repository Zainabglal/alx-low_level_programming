#include "main.h"
/**
 * cap_string - capitalizes the first character of words
 * @s: string that will have it's first character capitalized
 * Return: the capitalized string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i + 1] >= 97 && s[i + 1] <= 122)
		{
			if ((s[i] == '.' && s[i + 1] != ' ') || s[i] == '\t'
					|| s[i] == '\n' || s[i] == ' '
					|| s[i] == 2)
				s[i + 1] = s[i + 1] - 32;
			else
				s[i + 1] = s[i + 1];
		}
		else
			s[i + 1] = s[i + 1];
	}
	return (s);
}
