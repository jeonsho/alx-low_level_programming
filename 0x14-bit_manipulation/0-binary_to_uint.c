#include "main.h"

/**
 *binary_to_uint - Converts a binary string to an unsigned integer.
 *@b: A pointer to a binary string containing '0' and '1' characters.
 *Return: The converted unsigned integer value.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			result = result * 2 + (*b - '0');
		}
		else
		{
			return (0);
		}

		b++;
	}

	return (result);
}
