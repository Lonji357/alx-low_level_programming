#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	for (; head != NULL; head = temp)
	{
		temp = head->next;
		free(head);
	}
}
