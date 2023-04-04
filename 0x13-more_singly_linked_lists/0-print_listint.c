#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of the linked list
 *
 * Return: nimber of nodes
 */

size_t print_listint(cont listint_ *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		printif("%\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
