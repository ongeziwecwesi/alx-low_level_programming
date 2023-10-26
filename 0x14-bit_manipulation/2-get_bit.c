#include "main.h"

/**
 *  get_bit - gets the value of a bit at a given index
 *  @n: the number form which to get the bit
 *  @index: the index of the bit to retrieve, starting from 0
 *
 *  Return: the value of the bit at the given index or -1 if an erro occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((int)((n >> index) & 1));
}
