#include "lists.h"
#include <stdio.h>
#include < stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at a given index in a list
 * @head: a pointer to a pointer to the head of the list
 * @index: the index of the node to be deleted (starting at 0)
 *
 * Return: 1 if the deletion succeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (current != NULL)
	{
		if (count == index - 1)
		{
			if (current->next == NULL)
				return (-1);

			temp = current->next;
			current->next = temp->next;
			free(temp)
				return (1);
		}

		current = current->next;
		count++;
	}

	return (-1);
}
