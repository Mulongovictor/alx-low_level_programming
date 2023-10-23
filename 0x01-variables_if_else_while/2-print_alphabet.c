#include <stdio.h>
#include <time.h>

/**
 * main - print alphabets in lower case followed by a new line
 * 
 * Return: 0 Always
*/
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
