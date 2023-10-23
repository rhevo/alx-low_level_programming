#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head
 * @idx: index
 * @e: int
 *
 * Return: Address of the new node, NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int e)
{
	listint_t *new_node, *present;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = e;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	present = *head;
	for (i = 0; present != NULL && i < idx - 1; ++i)
	{
		present = present->next;
	}
	if (present == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = present->next;
	present->next = new_node;
	return (new_node);
}
