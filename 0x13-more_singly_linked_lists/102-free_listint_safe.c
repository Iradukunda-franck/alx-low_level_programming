#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: Double pointer to the list's head node
 *
 * Return: The size of the freed list
 *         The head is set to NULL by the function.
 */
size_t free_listint_safe(listint_t **h)
{
        listint_t *current, *temp;
        size_t count = 0;

        if (!h || !(*h))
                return (count);

        current = *h;
        while (current)
        {
                count++;
                temp = current;
                current = current->next;
                if (temp <= current)
                        break;
                free(temp);
        }
        *h = NULL;

        return (count);
}
