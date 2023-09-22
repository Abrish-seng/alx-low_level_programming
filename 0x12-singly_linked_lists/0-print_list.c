#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list -includes all the elements of a linked list
 * @h: pointer to printlist
 *
 *
 * Return: the number of nodes to be printed on the first task
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}

	return (a);
}

