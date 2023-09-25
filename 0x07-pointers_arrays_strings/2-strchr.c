#include "main.h"

/**
 *_strchr - function that locates a character in a string
 *@s: A pointer to the string
 *@c: The character we want to locate
 *
 *Return: char with result
 */
char *_strchr(char *s, char c) {
    while (*s != '\0') 
    {
        if (*s == c) 
	{
            return (s); 
        }

        s++; 
    }
    
    return (NULL);
}
