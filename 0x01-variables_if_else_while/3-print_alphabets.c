#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main -print alphabets in lower case a-z
 * Return: always (0)
*/
int main(void)
{
	char Lower = 'a';
	char Upper = 'A';

	while (Lower <= 'z')
	{
		putchar(Lower);
		Lower++;
	}
	while (Upper <= 'Z')
	{
		putchar(Upper);
		Upper++;
	}
	putchar('\n');
	return (0);
}
