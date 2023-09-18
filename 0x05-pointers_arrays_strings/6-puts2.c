#include "main.h"

/**
 *puts2 - prints one char out of 2 of a string
 *followed by a new line
 *@str: string to print the chars from
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
