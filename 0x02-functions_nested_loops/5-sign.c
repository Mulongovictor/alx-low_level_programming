#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of an integer
 * @n: is the integer
 * Return: 1 if integer is a positive, 0 if integer is 0 and
 * -1 if integer is less than 0 or negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
