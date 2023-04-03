#include "lists.h"

/**
 * sum_listint - returns sum of all the data(n) of linked list.
 *
 * @head: pointer to head.
 * Return: sum of all data(n) of a linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	for (temp = head; temp != NULL; temp = temp->next)
	{
		sum += temp->n;
	}
	return (sum);
}
