#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: is the parameter of the function
 * @b:  is the parameter of the function
 * the variable that stores the memory address
 *
 * Return: 0 Always
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
