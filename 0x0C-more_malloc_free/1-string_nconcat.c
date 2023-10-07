#include "main.h"

/**
*string_nconcat - Concatenates two strings
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*Return: If the function fails - NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int j = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		j++;
	}
	concat = malloc(sizeof(char) * (j + 1));

	if (concat == NULL)
		return (NULL);
	j = 0;

	for (i = 0; s1[i]; i++)
	{
		concat[j++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		concat[j++] = s2[i];
	}
	concat[j] = '\0';
	return (concat);
}
