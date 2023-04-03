#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: New elements data.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Declare a new node and a temporary node to traverse the list */
	listint_t *new_node;
	listint_t *temp_node = *head;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, make the new node the head of the list */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list until the last node */
	for (; temp_node->next; temp_node = temp_node->next)
		;

	/* Add the new node to the end of the list */
	temp_node->next = new_node;

	return (new_node);
}
