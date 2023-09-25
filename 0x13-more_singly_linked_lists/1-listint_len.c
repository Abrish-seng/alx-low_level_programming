#include <stdlib.h>
#include "lists.h"

/**
 * listnt_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
