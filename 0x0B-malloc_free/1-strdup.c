#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a string is parsed and duplicated into allocated
 * memory.
 * @str: is the string to be copied in allocated memory
 *
 * Return: ptr, the string in allocated memory
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0, j;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	ptr = malloc(sizeof(char) * count);

	for (j = 0; j < count; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);

}
