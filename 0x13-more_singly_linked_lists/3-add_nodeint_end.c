#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: points to the  first node  in the list.
 * @n: data to insert in the new node.
 * Return:the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n);

{

listint_t *ptr;
listint_t *temp = *head;

temp = malloc(sizeof(listint_t));

temp->data = data;
temp->link = NULL;
while (ptr->link != NULL)
{
	ptr = ptr->link ;
}

ptr->link = temp;
}





