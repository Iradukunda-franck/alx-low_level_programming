#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j, k;

i = 1;
j = 2;
printf("%d, %d", i, j);

for (int n = 3; n <= 98; n++)
{
k = i + j;
printf(", %d", k);
i = j;
j = k;
}
printf("\n");

return (0);
}
