#include "lists.h"

/**
 * print_listint - the function name that prints all elements of a lists
 * @h: the function parameter that is a struct type
 * Description: Write a function that prints all
 * the elements of a listint_t list
 * Prototype: size_t print_listint(const listint_t *h);
 * Return: the number of nodes
 * Format: see example
 * You are allowed to use printf
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
