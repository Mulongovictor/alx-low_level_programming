#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of the string
 * @s: its a variables that holds the memory address that
 * has a value which is a char
 * Return: length
 */
int _strlen(char *s)
{
	int vic1 = 0;

	while (*s != '\0')
	{
		vic1++;
		s++;
	}
	return (vic1);
}
