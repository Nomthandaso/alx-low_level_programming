#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * size_t print_listint - prints all the elements of a listint_t list
 * @h: pointer to the listint_t to print
 *
 * Return: number of elements in h
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d/n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
