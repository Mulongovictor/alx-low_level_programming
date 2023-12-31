#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - This program will assign a random number to
 * the variable n each time it is executed.
 * It  prints the last digit of the number stored in the variable n.
 *
 * Return: Always (0)
*/
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	/* your code goes there */
	return (0);
}
