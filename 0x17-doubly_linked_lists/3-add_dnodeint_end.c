#include "lists.h"

/**
 * *add_dnodeint_end - the function name that adds a
 * node at the end of a linked lists
 * @head: the head part of the linked list
 * that is a pointer to a pointer
 * @n: the value part that is a constant
 * Description: Write a function that adds a
 * new node at the end of a dlistint_t list
 * Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current_node = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = new_node;
	new_node->prev = current_node;
	return (new_node);


}
