#include "main.h"
#include <stdio.h>
/**
 * _puts - print string followed by new line
 * @str: prints string
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
