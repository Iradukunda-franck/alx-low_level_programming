#include "main.h"


/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: pointer to the number
 * @index: index of the bit to set, starting from 0
 *
 * Return: 1 on success, or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask = 1UL << index;

	*n &= ~mask;

	return (1);
}
