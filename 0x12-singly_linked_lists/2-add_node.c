#include "lists.h"

/**
 * *add_node - the function name that adds node at the
 * beginning of a list_t list
 * @head: the first function parameter that is
 * a pointer to a another pointer
 * @str: the second parameter that is a char
 * Description: Write a function that adds a new node at
 * the beginning of a list_t list
 * Prototype: list_t *add_node(list_t **head, const char *str);
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 * You are allowed to use strdup
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *str_dup = strdup(str);

	if (new_node == NULL || str_dup == NULL)
	{
		return (NULL);
	}
	new_node->str = str_dup;
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
