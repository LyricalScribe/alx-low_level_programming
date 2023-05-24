#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @h: head of the list
 * Return: address of the new node or NULL on failure
 */

 dlistint_t *add_dnodeint(dlistint_t **head, const int n)
 {
 	dlistint_t *new;

 	new = malloc(sizeof(dlistint_t));
 	if (new == NULL)
 		return (NULL);

 	new->prev = NULL;
 	new->n = n;
 	new->next = NULL;
 	if (*head == NULL)
 	{
 		*head = new;
 		return (new);
 	}
 	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
 }
