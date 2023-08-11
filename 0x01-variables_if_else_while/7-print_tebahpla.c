#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main -print alphabets with out char and use putchar
 * Return: always (0)
*/
int main(void)
{
	int alphabets = 'z';

	while (alphabets >= 'a')
	{
		putchar(alphabets);
		alphabets--;
	}
	putchar('\n');
	return (0);
}
