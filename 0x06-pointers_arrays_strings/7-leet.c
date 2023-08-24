#include "main.h"
#include <stdio.h>

/**
 * leet - a function that encodes a string into 1337
 * @str: set of strings to be encoded
 *
 * Return: Encoded string
 */
char *leet(char *str)
{
	int i, j;
	char c[] = "aAeEo0tTlL";
	char d[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = d[j];
			}
		}
	}
	return (str);
}
