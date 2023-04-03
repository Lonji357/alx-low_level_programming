#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list
 *                     safely using a hash table.
 *
 * @head: Pointer to head of linked list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp = head;
	const listint_t *visited[1024] = {NULL};

	while (temp != NULL)
	{
		size_t i = ((size_t)temp % 1024);

		if (visited[i] == temp)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			return (count);
		}

		visited[i] = temp;
		printf("[%p] %d\n", (void *)temp, temp->n);

		count++;
		temp = temp->next;
	}

	return (count);
}
