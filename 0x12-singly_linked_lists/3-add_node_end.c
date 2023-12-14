#include "lists.h"

/**
 * *add_node_end - the function name that adds a
 * node at the end of a list
 * @head: the function parameter that is a pointer to
 * another pointer
 * @str: the second parameter that is a char
 * Desc: Write a function that adds a new node at the end of a list_t list
 * Prototype: list_t *add_node_end(list_t **head, const char *str);
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 * You are allowed to use strdup
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *str_dup = strdup(str);
	list_t *temp = *head;

	if (new_node == NULL || str == NULL)
	{
		return (NULL);
	}
	new_node->str = str_dup;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
