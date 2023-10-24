#include "lists.h"

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
	unsigned int count;
	listint_t new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (count = 0; current && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		else
			current = current->next;
	}

	return (NULL);
}
