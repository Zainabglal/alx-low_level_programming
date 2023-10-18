#include "main.h"

/**
 * _isalpha - checks if the character is alphabet or not
 *
 * Description: this function finds the alphabetcial chars
 * @c: the parameter to be checked
 * Return: 1 if true and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
