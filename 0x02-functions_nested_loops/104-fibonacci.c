#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
unsigned long long int n1 = 1, n2 = 2, next, i;

printf("%llu, %llu", n1, n2);
for (i = 3; i <= 98; i++)
{
next = n1 + n2;
printf(", %llu", next);
n1 = n2;
n2 = next;
}
printf("\n");
return (0);
}
