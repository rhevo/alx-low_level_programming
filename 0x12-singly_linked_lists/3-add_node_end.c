#include "lists.h"

/**
 * _strlen - calc str len
 * @str: string
 *
 * Return: str len
 */
unsigned int _strlen(const char *str)
{
	unsigned int f;

	for (f = 0; str[f]; ++f)
		;
	return (f);
}

/**
 * add_node_end - adds new node at the end of a list_t list
 * @head: head
 * @str: string
 *
 * Return: address to new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *end;

	if (!head || !str)
		return (NULL);

	end_node = malloc(sizeof(list_t));
	if (!end_node)
		return (NULL);

	end_node->str = strdup(str);
	if (!end_node->str)
	{
		free(end_node);
		return (NULL);
	}

	end_node->len = _strlen(str);
	end_node->next = NULL;

	if (!*head)
	{
		*head = end_node;
		return (end_node);
	}

	end = *head;
	while (end->next)
		end = end->next;

	end->next = end_node;
	return (end_node);
}
