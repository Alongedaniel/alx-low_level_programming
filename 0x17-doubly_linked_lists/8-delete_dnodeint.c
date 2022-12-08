#include "lists.h"

/**
 * delete_dnodeint_at_index - The function
 * @head: head
 * @index: index
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (unsigned int i = 0; i < index && current; i++)
		current = current->next;

	if (!current)
		return (-1);

	temp = current;
	current = current->prev;
	current->next = temp->next;
	if (current->next)
		current->next->prev = current;
	free(temp);

	return (1);
}
