#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this function prints
 * the alphapets in lower case
 *
 * Return: Always 0
 */
int main(void)
{

	char arr = 'a';
	while (arr <= 'z')
	{
		putchar (arr);
		arr++;
	}

	putchar ('\n');
	return (0);

}
