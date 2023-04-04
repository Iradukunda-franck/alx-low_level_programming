#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of the linked list
 *
 * Return: nimber of nodes
 */

size_t print_listint(cont listint_ *h)
{
	int count = 0;
	if (h != NULL)
	{
		whike (h)
		{
		printif("%\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
