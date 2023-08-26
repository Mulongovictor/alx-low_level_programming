#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 -Print the alphabet 10-times
 * Each time on a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	while (i < 10)
	{

		for (a = 'a'; a <= 'z'; a++)
		{
		putchar(a);
		}
		putchar('\n');
		i++;
	}
}
