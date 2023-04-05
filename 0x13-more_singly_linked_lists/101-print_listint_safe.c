#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: Pointer to the list's head node
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t num_nodes = 0;
    const listint_t *current = head, *temp;

    while (current)
    {
        num_nodes++;
        printf("[%p]%d\n", (void *)current, current->n);
        temp = current;
        current = current->next;
        if (temp <= current)
        {
            printf("-> [%p]%d\n", (void *)current, current->n);
            exit(98);
        }
    }
    return (num_nodes);
}
