#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to a pointer to the head of the list
 * @str: the string to be duplicated and stored in the new node
 * Return: the address of the new element,or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new node;
	int i;

	for (i = 0; dup_str[i] != '\0'; i++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node)
			return (NULL);
	}
	new_node->len =  i;
	new_node->next = *head;

	*head = new_node;
	return (*head);
}
