#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 *
 * @head: pointer to first element.
 * @index: index of the node to return.
 * Return: return nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
