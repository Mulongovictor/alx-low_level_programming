#include <stdio.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits,
 * they are  different, prints only the smallest combination.
 * Return: always (0)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = (i + 1); j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (i != '8' || (num_1 == '8' && num_2 != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
