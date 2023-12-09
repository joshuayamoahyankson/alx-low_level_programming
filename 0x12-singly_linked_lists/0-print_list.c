#include "lists.h"

/**
 * print_list - the function name that prints all the elements of a list_t list
 * @h: the new struct
 * Description: Write a function that prints all the elements of a list_t list
 * Prototype: size_t print_list(const list_t *h);
 * Return: the number of nodes
 * Format: see example
 * If str is NULL, print [0] (nil)
 * You are allowed to use printf
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			unsigned long length = strlen(h->str);

			printf("[%lu] %s\n", length, (h->str));
		}
		node_count++;
		h = h->next;
	}
	return (node_count);
}
