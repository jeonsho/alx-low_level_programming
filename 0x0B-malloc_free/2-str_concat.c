#include "main.h"
#include<stdio.h>
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *@s1: first input string
 *@s2: second input string
 *
 *Return: returns NULL on failer
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *str;
	int i;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	str = (char *) malloc(len1 + len2 + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	str[len1] = ' ';

	for (i = 0; i < len2; i++)
	{
		str[len1 + 1 + i] = s2[i];
	}

	str[len1 + len2 + 1] = '\0';

	return (str);
}


