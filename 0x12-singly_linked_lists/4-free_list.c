#include "lists.h"

/**
 * free_list - Frees a list_t linked list.
 * @head: A pointer to the head of the list_t list.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

