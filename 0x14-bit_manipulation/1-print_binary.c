#include "main.h"

/**
 * print_binary - prints a number's binary form using the function print binary.
 *
 * @n: The number to be printed in binary.
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int max_bits = sizeof(n) * 8;
	int i;

	for (i = max_bits - 1; i >= 0; i--)
	{
		if ((n >> i) & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}

