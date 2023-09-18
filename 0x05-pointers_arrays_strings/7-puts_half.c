#include "main.h"

/**
 * puts_half -  prints half of a string
 *  followed by a new line.
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len ,st_index,i;
	
	len=0;	
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
	 	for (i = len/2 ; str[i] != '\0' ; i++)
			_putchar(str[i]);
	}
	else if (len % 2)
	{
		for (st_index = (len - 1);st_index < len - 1; st_index++)
			_putchar(str[st_index+1]);
	}
	_putchar('\n');
}
