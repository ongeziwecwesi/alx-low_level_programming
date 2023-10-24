#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position in a list
 * @head: a pointer to a pointer to the head of the list
 * @idx: the index where the new node should be added (starting at 0)
 * @n: the integer value to be stored in the new node
 *
 * Return: the address of the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int count = 0;

	if (idx == 0)
		return (add_ nodeint(head, n));

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);

		}
		current = current->next;
		count++;
	}
	return (NULL);
}
