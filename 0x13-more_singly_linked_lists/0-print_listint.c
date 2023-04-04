#include "lists.h"

/**
 * Write a function that prints all the elements of a listint_t list.
 * @h: pointer to the head of the list.
 * return number of nodes
 */
size_t print_listint(const listint_t *h);

{
	size_t number = 0;

	while (h)

{
	number++
	printf("%d\n", h->n);
h = h->next;
}
return (number);
}
