#include "main.h"
#include <stdio.h>

/**
 * leet - a function that encodes a string into 1337
 * @n: set of strings to be encoded
 *
 * Return: Encoded string
 */
char *leet(char *n)
{
	int i, j;
	char c[] = "aAeEo0tTlL";
	char d[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == c[j])
			{
				n[i] = d[j];
			}
		}
	}
	return (n);
}
