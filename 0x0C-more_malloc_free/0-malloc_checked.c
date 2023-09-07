#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory
 * to unsigned int b passed to and returns a pointer
 * @b: number of bytes to allocate
 *
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
