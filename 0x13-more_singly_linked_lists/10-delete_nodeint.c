#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @index: index
 * @head: head
 *
 * Return: 1if it succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int  index)
{
	listint_t *tmp, *present, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	present = *head;
	prev = NULL;

	for (i = 0; present != NULL && i < index; ++i)
	{
		prev = present;
		present = present->next;
	}

	if (present == NULL)
	{
		return (-1);
	}

	prev->next = present->next;
	free(present);
	return (1);
}
