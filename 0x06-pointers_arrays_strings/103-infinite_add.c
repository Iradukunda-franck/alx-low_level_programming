#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store result
 * @size_r: Size of buffer
 *
 * Return: Pointer to result or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, len_res, carry, digit1, digit2, sum;
	char *p1, *p2, *p_res;

	/* Get lengths of strings */
	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;

	/* Check if result can be stored in r */
	if (len1 >= size_r || len2 >= size_r || len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	/* Add digits */
	p1 = n1 + len1 - 1;
	p2 = n2 + len2 - 1;
	p_res = r + size_r - 1;
	*p_res = '\0';
	carry = 0;
	len_res = 0;
	while (p_res > r)
	{
		digit1 = p1 >= n1 ? *p1 - '0' : 0;
		digit2 = p2 >= n2 ? *p2 - '0' : 0;
		sum = digit1 + digit2 + carry;
		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		*--p_res = sum + '0';
		len_res++;
		if (p1 >= n1)
			p1--;
		if (p2 >= n2)
			p2--;
	}

	/* Add carry if there is one */
	if (carry)
	{
		if (len_res + 1 >= size_r)
			return (0);
		*--p_res = carry + '0';
		len_res++;
	}

	/* Move result to the beginning of the buffer */
	for (p1 = r; p_res < r + size_r; p1++, p_res++)
		*p1 = *p_res;

	return (r);
}
