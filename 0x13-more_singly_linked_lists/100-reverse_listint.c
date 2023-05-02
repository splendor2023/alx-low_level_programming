#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: a pointer to a pointer to the first node of the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward, *backward;

	if (head == NULL || *head == NULL)
		return (NULL);

	backward = NULL;

	while ((*head)->next != NULL)
	{
		forward = (*head)->next;
		(*head)->next = backward;
		backward = *head;
		*head = forward;
	}

	(*head)->next = backward;

	return (*head);
}
