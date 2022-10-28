#include "lists.h"

/**
 * free_listint -frees memory from a list
 * @head: pointer to the list
 **/
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	current = head;
	{
		ext = current->next;
		free(current);
		current = next;
	}
}
