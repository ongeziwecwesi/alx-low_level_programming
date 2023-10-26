#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to a string containing the binary number
 *
 * Return: the converted number, or 0 if there are invalid characters
 */
unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (c = 0; b[c] != '0'; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}
	for (c = 0; b[c] != '0'; c++)
	{
		result <<= 1;
		if (b[c] == '1')
			result += 1;
	}
	return (result);
}
