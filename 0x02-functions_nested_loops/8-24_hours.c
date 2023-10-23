#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * jack_bauer - prints every minute of the day for Jack bauer
 *
 * Return: Nothing;
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(' ');
			_putchar('\n');
		}

	}
}
