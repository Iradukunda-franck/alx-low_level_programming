#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char c;

/* print lowercase alphabet */
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}

/* print uppercase alphabet */
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}

putchar('\n');

return 0;
}
