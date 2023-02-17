#include <stdlib.h>
#include <time.h>
/**
 * main - Determines if a number is positive, negative, or zero.
 * Return: Always 0 (success)
 */
	int main(void);
	{

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > a)
	{

		printf("%d is positive\n", n);

	}
	else if (n == a)
	{

	printf("%d is zero\n", n);

	}
	else
	{

	 printf("%d is negative\n", n);

	}
	return (0);
}
