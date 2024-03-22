#include "lists.h"

/**
 * *add_dnodeint - the function that adds a
 * node at the beginning
 * @head: the head part of the node that is
 * a double pointer
 * @n: the value part of the node that is a constant
 * Description: Write a function that adds a new node
 * at the beginning of a dlistint_t list
 * Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
	}
	*head = new_node;
	return (new_node);
}
