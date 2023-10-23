#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head
 *
 * Return: ...
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		++c;
	}
	return (c);
}
