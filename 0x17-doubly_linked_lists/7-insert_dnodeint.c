#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position in a list
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added, starting from 0
 * @n: value to store in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*h == NULL && idx > 0)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}

	current = *h;
	while (current != NULL && idx > 1)
	{
		current = current->next;
		idx--;
	}

	if (current == NULL)
	{
		return (NULL);
	}

	new_node->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
