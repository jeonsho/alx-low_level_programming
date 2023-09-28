#include <stdio.h>
#include "main.h"

/**
 *_sqrt_recursion - Returns the natural square root of a number
 *@n: number to calculate the natural square root
 *
 *Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (my_sqrt(n, 1));
}

/**
 *my_sqrt - Calculates natural square root
 *@n: number to calculate the square root
 *@i: iterate number
 *
 *Return: the natural square root
 */
int my_sqrt(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);

	if (sq == n)
		return (i);

	return (my_sqrt(n, i + 1));
}
