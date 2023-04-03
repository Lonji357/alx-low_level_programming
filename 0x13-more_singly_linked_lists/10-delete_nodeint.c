#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at certain index of a linked list.
 *
 * @head: pointer to pointer to head.
 * @index: index of the node to be deleted.
 * Return: return 1 if success, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *next;

	/* if linked list is empty */
	if (*head == NULL)
		return (-1);

	tmp = *head;
	/* if head needs to be removed */
	if (index == 0)
	{
		*head = tmp->next; /* change head */
		free(tmp); /* free old head */
		return (1);
	}
	for (i = 0; tmp != NULL && i < index - 1; i++)
	{
		tmp = tmp->next;
	}
	/* if index is greater than the number of nodes */
	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	next = tmp->next->next;

	free(tmp->next);
	tmp->next = next;
	return (1);
}
