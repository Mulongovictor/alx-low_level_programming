#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9-times table starting with 0
 *
 * Return: nothing
*/
void times_table(void)
{
	int j, i, num;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = i * j;
			if ((num / 10) == 0)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(num + '0');
				if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			else if ((num / 10) != 0)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				if (j != 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
