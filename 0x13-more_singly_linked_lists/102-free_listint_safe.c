#include "lists.h"

/**
 * free_listint_safe - frees a linked list, even if it has a loop
 * @h: a pointer to the first node of the linked list
 *
 * Return: the number of nodes in the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t len = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
	len++;
	next = current->next;
	free(current);
	if (next >= current)
	{
		*h = NULL;
		break;
	}
	current = next;
	}

	*h = NULL;

	return (len);
}
