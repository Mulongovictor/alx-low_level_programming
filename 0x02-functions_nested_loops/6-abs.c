#include <stdio.h>
#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @n: is the integer
 * Return: the absolute value.
 */


int _abs(int n)
{
	int num;

	if (n < 0)
	{
		num = n * -1;
		return (num);
	}
	else
	{
		return (n);
	}

}
