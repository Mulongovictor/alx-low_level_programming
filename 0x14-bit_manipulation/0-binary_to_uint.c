#include "main.h"

/**
 * binary_to_uint - converts binary number into unsigned int.
 * @b: character pointer that points at a string of 1 & 0.
 * Return: result;
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			result = (result << 1) | (b[i] - '0');
		}
	}
	return (result);
}
