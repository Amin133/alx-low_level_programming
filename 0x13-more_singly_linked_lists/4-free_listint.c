#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: head of linked list
 *
 * Return: void
 *
 */

void free_listint(listint_t *head)
{
	listint_t *camp;

	camp = head;
	while (camp != NULL)
	{
		camp = temp->next;
		free(head);
		head = camp;
	}
}
