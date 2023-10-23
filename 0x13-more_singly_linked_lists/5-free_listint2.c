#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: head
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *present, *tmp;

	if (head == NULL)
	{
		return;
	}

	present = *head;
	while (present != NULL)
	{
		tmp = present;
		present = present->next;
		free(tmp);
	}

	*head = NULL;
}

