#include "lists.h"

/**
 * get_nodeint_at_index - eturns the nth node of a
 * listint_t linked list.
 * @head: head
 * @index: index
 *
 * Return: NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (c == index)
		{
			return (head);
		}
		head = head->next;
		++c;
	}
	return (NULL);
}
