#include "main.h"

/**
 * _islower - checks if the character is lowercase
 * @c: the integer parameter to be compared
 *
 * Return: 1 if true and 0  otherwise
 */

int _islower(int c)
{

	if (c <= 90 && c >= 65)
		return (0);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
