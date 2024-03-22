#include "lists.h"

/**
 * dlistint_len - the function name to return number of elements
 * @h: the function parameter that is a constant(head pointer)
 * Description: Write a function that returns the
 * number of elements in a linked dlistint_t list
 * Prototype: size_t dlistint_len(const dlistint_t *h);
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
