#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t linked list.
 *
 * @head: pointer to the first node of a linked list.
 * @n: head nodes data.
 * Return: the head node’s data or 0 if list is empty.
 */

int pop_listint(listint_t **head);

{
	istint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

