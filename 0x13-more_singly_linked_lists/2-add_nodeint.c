#include "lists.h"

/**
 * *add_nodeint - the function parameter that is a pointer
 * which adds a new node at the beginning of a listint_t lists
 * @head: the first functionn parameter that is A pointer
 * to another pointer
 * @n: the second function parameter that is an int
 * Description: Write a function that adds a new node
 * at the beginning of a listint_t list
 * Prototype: listint_t *add_nodeint(listint_t **head, const int n);
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
