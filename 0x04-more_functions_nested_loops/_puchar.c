#include "main.h"
#include <unistd>

/**
 * _putchar - writes the character to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and eerno is set appropriately
 */

int _putchat(char c)
{
	return (write(1, &c, 1));
}
