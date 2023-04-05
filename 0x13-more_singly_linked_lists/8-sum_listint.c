#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) in a linked listint_t
 * @head: pointer to the list's head
 *
 * Return: sum of all data (n), or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

