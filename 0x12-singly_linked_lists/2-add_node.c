#include "lists.h"

/**
 * _strlen - Calculate the length of a string
 * @s: Input string
 *
 * Return: string length
 */
unsigned int _strlen(const char *s)
{
	unsigned int f = 0;

	while (s[f] != '\0')
	{
		++f;
	}
	return (f);
}
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to head of list
 * @str: new node's string value
 *
 * Return: Address of new element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!head || !str)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
