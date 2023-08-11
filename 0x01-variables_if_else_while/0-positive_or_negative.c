#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*
 * betty style doc for function main goes there
 * This program will assign a random number to the variable n each
 * time it is executed. Complete the source code in order to print whether
 * the number stored in the variable n is positive or negative.
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
	print("The number is a negative number\n");
	}
	/* your code goes there */
	return (0);
}
