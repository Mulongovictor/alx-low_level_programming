#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a figure or number
 * @n: is the figure
 * Return: the last number of the figure.
 */

int print_last_digit(int n)
{
	int num;

	if (n < 0)
		n = -n;
	num = n % 10;
	if (num < 0)
	{
		num = num * 1;
	}
	_putchar('0' + num);
	return (num);

}