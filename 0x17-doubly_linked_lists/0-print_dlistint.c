#include "lists.h"

/**
 * print_dlistint - the function name for printing elements
 * @h: the pointer parameter that is a constant
 * Description: Write a function that prints
 * all the elements of a dlistint_t list
 * Prototype: size_t print_dlistint(const dlistint_t *h);
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *var = h;
	size_t count = 0;

	while (var != NULL)
	{
		printf("%d\n", var->n);
		var = var->next;
		count++;
	}
	return (count);
}
