#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point for the program
 *
 * This program generates a random number and prints its last digit along with
 * a message indicating whether the digit is greater than 5, less than 6 and not
 * 0, or 0.
 * Return: Always 0
*/

int main(void)
{
int n, dig;

srand(time(0));
n = rand() - RAND_MAX / 2;
dig = n % 10;
printf("Last digit of %d is ", n);

if (dig > 5)
{
printf("%d and is greater than 5\n", dig);
}
else if (dig == 0)
{
printf("%d and is 0\n", dig);
}
else
{
printf("%d and is less than 6 and not 0\n", dig);
}
return (0);
}
