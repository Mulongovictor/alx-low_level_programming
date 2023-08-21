#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_rev - print in reverse
 * @s: character to print in reverse
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (a--; a >= 0; a--)
		putchar(s[a]);
	putchar('\n');
}
