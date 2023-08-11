#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*
 * betty style doc for function main goes there
 * main - generate random numbers to detect -ve or +ve
 *
 * Return: always (0)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("This number is a positive number\n");
	}
	else if (n == 0)
	{
	printf("The number is zero\n");
	}
	else
	{
	printf("The number is a negative number\n");
	}
	/* your code goes there */
	return (0);
}
