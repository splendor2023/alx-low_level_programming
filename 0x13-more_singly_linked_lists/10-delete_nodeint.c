#include "list.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *temp_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
	temp_node = *head;
	*head = (*head)->next;
	free(temp_node);
		return (1);
	}

	current_node = *head;
	for (i = 0; i < index - 1 && current_node != NULL; i++)
	{
	current_node = current_node->next;
	}

	if (current_node == NULL || current_node->next == NULL)
	return (-1);

	temp_node = current_node->next;
	current_node->next = temp_node->next;
	free(temp_node);

	return (1);
}
