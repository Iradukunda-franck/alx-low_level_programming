#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: Always 0
 */


int main(void)
{
unsigned long long n1 = 0, n2 = 1, next, i, n = 100;
printf("Fibonacci series:\n");

for (i = 0; i < n; i++)
{
if (i <= 1)
{
next = i;

}
else
{
next = n1 + n2;
n1 = n2;
n2 = next;
}
printf("%llu, ", next);
}
return (0);
}
