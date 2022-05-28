#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the listint list to be freed
 * Return: void has no return type
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
