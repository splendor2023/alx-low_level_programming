#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to the head node of the list
 *
 * Return: the head node's data (n)
 *         0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	temp = (*head)->next;

	data = (*head)->n;

	free(*head);
	*head = temp;
	return (data);
}
