#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 *
 * @head:head of the double pointer
 * @n:int to be added in the list
 * return:Null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
	return (NULL);

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
