#include "main.h"
#include <stdio.h>

/**
 * _islower - checks whether a character is
 * lowercase or not
 * @c: is a parameter for the function _islower
 * Return: 1 for lowercase character
 * or 0 for anything else.
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
