#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer to be added to the new node
 *
 * Return: the address of the new node, or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int j;

	if (!head)
	return (NULL);

	if (idx == 0)
	return (add_nodeint(head, n));

	for (j = 0; j < idx - 1 && current; j++)
	current = current->next;

	if (j < idx - 1 || !current)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
