#include "lists.h"

/**
 * free_listint2 - the function name that frees a listint_t list
 * @head: the function parameter to be freed
 * Description: Write a function that frees a listint_t list
 * Prototype: void free_listint2(listint_t **head);
 * The function sets the head to NULL
 * Return: the freed function
 */

void free_listint2(listint_t **head)
{
	listint_t *free_node_2;

	while (*head != NULL)
	{
		free_node_2 = *head;
		*head = (*head)->next;
		free(free_node_2);
	}
	*head = NULL;
}
