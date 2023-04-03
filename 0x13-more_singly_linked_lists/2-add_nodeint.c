#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The data to add to the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Declare a new node pointer */
	listint_t *new_node;

	/* If the head of the list is empty, set the new node to the head */
	if (*head == NULL)
		new_node = *head;

	/* Otherwise, allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));

	/* If allocation fails, return NULL */
	if (new_node == NULL)
		return (NULL);

	/* Set the value of the new node to the given value */
	new_node->n = n;

	/* Set the next pointer of the new node to the current head */
	new_node->next = *head;

	/* Set the head to point to the new node */
	*head = new_node;

	/* Return a pointer to the new node */
	return (new_node);
}
