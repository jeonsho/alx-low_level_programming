#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>

void positive_or_negative(int i);
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
int largest_number(int a ,int b,int c);
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
void print_remaining_days(int month, int day, int year);
/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
int convert_day(int month, int day);
/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/
#endif /* MAIN_H */
