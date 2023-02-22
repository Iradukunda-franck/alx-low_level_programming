#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long int a = 1, b = 2, c;

printf("%lu, %lu, ", a, b);
for (i = 0; i < 48; i++)
{
c = a + b;
printf("%lu", c);
a = b;
b = c;
if (i == 47)
putchar('\n');
else
printf(", ");
}
return (0);
}

