#include "lists.h"

/**
 * listint_t - returns number of elements in a linked list
 * @h: pointer to the head of the list.
 * return number of nodes
 */
size_t print_listint(const listint_t *h);

{
	size_t number = 0;

	while (h)

{
	printf("%d\n", h->n);
	number++;
h = h->next;
}
return (number);
}
