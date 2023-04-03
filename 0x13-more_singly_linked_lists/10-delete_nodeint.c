#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at current index of a linked list
 * @head: pointer to pointer to head
 * @index: position of the node to be deleted
 *
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *next;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	tmp = *head;
	for (i = 0; tmp != NULL && i < index - 1; i++)
		tmp = tmp->next;

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	next = tmp->next->next;
	free(tmp->next);
	tmp->next = next;
	return (1);
}
