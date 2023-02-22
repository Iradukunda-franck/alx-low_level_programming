#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
unsigned int n1 = 1, n2 = 2, next, i;

printf("%u, %u", n1, n2);

for (i = 3; i <= 98; i++)
{
ext = n1 + n2;
printf(", %u", next);
n1 = n2;
n2 = next;
}

printf("\n");

return (0);
}
