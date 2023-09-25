#include "lists.h"

/**
 * free_listint - frees the linked list memory
 * @head: listint_t list also free the head
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
