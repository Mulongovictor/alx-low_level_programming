#include "main.h"
#include <stdio.h>

/**
 * puts2 - this will print all
 * even characters of a string
 * @str: the string input
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
