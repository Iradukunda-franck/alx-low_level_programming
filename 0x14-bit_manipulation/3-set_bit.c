#include "main.h"
/**
 * set_bit - Sets the value of a bit at a certain index to 1
 * @n: pointer to the number whose bit has to be set
 * @index: the bit's index, starting at 0
 *
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n | (1 << index));
	return (1);
}
