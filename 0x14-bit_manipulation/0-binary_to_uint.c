#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to a string containing the binary number
 *
 * Return: the converted number, or 0 if there are invalid characters
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) + (*b - '0');
		b++;
	}

	return (result);
}
