#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - prints lowercase alphabets in reverse followed by a newline.
 *
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
