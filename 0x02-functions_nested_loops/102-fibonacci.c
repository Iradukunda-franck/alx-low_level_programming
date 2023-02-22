#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
int i, fib1 = 1, fib2 = 2, nextFib;

printf("%d, %d", fib1, fib2);

for (i = 3; i <= 50; i++)
{
nextFib = fib1 + fib2;
printf(", %d", nextFib);
fib1 = fib2;
fib2 = nextFib;
}

printf("\n");
return (0);
}

