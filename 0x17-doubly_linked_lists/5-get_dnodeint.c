#include "lists.h"

/**
 * *get_dnodeint_at_index - the function that returns
 * the nth node of a dlistint_t linked list
 * @head: the function parameter that is a pointer
 * @index: the index node to be returned
 * Description: Write a function that returns the
 * nth node of a dlistint_t linked list
 * Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head,
 * unsigned int index);
 * where index is the index of the node, starting from 0
 * if the node does not exist, return NULL
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int count_var = 0;

	while (count_var < index && ptr != NULL)
	{
		ptr = ptr->next;
		count_var++;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
