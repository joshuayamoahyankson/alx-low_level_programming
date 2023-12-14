#include "lists.h"

/**
 * *add_nodeint_end - the function parameter that is a pointer
 * which adds a new node at the end of a listint_t list
 * @head: the first function parameter that is A pointer
 * to another pointer
 * @n: the second function parameter that is an int
 * Description: Write a function that adds a new node
 * at the end of a listint_t list
 * Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (*head);
}

