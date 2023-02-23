#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
long int n = 612852475143;
long int i;

for (i = 2; i <= n; i++)
{
if (n % i == 0)
{
printf("%ld", i);
n /= i;
i--;
}
}

printf("\n");
return (0);
}
