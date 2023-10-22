#include "main.h"
/**
 * _isupper - checks if the character is uppercase of lowercase
 * @c: The parameter to be checked
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
