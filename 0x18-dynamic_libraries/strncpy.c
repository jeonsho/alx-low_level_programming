#include "main.h"

/**
 *_strncpy - Write a function that copies a string, with number of bytes
 *@dest: This is the output dest
 *@src: This is the input source
 *@n: This is the number of bytes to copy
 *
 *Return: Copied string with the number of bytes
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
