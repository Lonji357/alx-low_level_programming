#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;

	if (head == NULL)
		return;
	for (current_node = *head; current_node != NULL; current_node = next_node)
	{
		next_node = current_node->next;
		free(current_node);
	}
	*head = NULL;
}
