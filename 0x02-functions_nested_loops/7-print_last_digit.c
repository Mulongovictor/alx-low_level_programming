#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a figure or number
 * @num: is the figure
 *
 * Return: the last number of the figure.
 */

int print_last_digit(int num)
{
	int num2;

	num2 = num % 10;
	if (num < 0)
	{
		num2 = -num2;
	}
	putchar('0' + num2);
	return (num2);
}
