#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * 
 * Return: always (0)
*/
int main(void)
{
	char numbers = '0';
	char letters = 'a';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
