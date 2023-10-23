#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: head
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	n = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (n);
}
