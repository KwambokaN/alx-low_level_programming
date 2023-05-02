#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 *
 * @head: first element in a linked list.
 * Return: Total sum.
 */
int sum_listint(listint_t *head);

{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

