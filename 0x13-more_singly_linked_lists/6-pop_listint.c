#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to a pointer to the head of the list
 *
 * Return:the data (n) of the deleted head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;

	if (*head != NULL)
	{
		listint_t *temp = *head;

		data = temp->n;
		*head = (*head)->next;
		free(temp);
	}

	return (data);
}
