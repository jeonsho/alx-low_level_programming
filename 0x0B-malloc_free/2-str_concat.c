#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *@s1: first input string
 *@s2: second input string
 *
 *Return: returns NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0;
	len2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	str = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	i = 0;

	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}

	j = 0;

	while (j < len2)
	{
		str[i + j] = s2[j];
		j++;
	}

	str[i] = '\0';
	return (str);
}
