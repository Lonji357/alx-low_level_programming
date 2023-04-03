#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 *
 * @head: pointer to a pointer to head
 * Return: head node's data, or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp_node;

	if (*head == NULL)
	{
		return (0);
	}
	temp_node = *head;
	data = temp_node->n;
	*head = (*head)->next;
	temp_node->next = NULL;
	free(temp_node);
	return (data);
}
