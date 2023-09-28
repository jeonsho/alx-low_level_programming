#include "main.h"

/**
 *_pow_recursion - Search a string for any of a set of bytes.
 *@x: base
 *@y: exposant
 *Return: Always succes
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
