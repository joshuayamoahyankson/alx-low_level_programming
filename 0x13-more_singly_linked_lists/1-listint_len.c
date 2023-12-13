#include "lists.h"

/**
 * listint_len - the function name that returns the number
 * of elements in a linked listint_t lists
 * @h: the function parameter that is a struct type
 * Description: Write a function that returns the number
 * of elements in a linked listint_t list
 * Prototype: size_t listint_len(const listint_t *h);
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t node_elements = 0;

	while (h != NULL)
	{
		node_elements++;
		h = h->next;
	}
	return (node_elements);
}
