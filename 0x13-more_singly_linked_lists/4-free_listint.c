#include "lists.h"

/**
 * free_listint - the function name that frees a list
 * and returns void
 * @h: the function parameter to be freed
 * Description: Write a function that frees a listint_t list
 * Prototype: void free_listint(listint_t *head);
 * Return: the freed list
 */

void free_listint(listint_t *head)
{
	void *free_node;

	while (head != NULL)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}

}
