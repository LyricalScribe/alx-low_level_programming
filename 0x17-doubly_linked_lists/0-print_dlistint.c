#include "lists.h"

/**
 * print_dlistint - prints all elements of linked list
 * @h: head of the list
 * 
 * Return: The number of nodes
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *current = h;

	if (h == NULL)
	{
		return (0);
	}
	while (current)
	{
		printf("%d\n", current->n);
		n++;
		current = current->next;
	}
	return (n);
}
