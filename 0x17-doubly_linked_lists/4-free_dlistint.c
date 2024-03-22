#include "lists.h"

/**
 * free_dlistint - the function that free a linked lists
 * @head: the head pointer parameter
 * Description: Write a function that frees a dlistint_t list
 * Prototype: void free_dlistint(dlistint_t *head);
 * Return: the freed dlistint_t list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
