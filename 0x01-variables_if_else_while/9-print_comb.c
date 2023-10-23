#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - prints all possible combinations of single digit numbers
 * numbers are separated by , followed by a space.
 * Return: always (0)
*/
int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		if (numbers <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		numbers++;
	}
	putchar('\n');
	return (0);
}
