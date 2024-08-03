#include "lists.h"
/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 *
 * This function frees the memory allocated for each node
 * in the list, including the strings contained in each node
 */
void free_list(list_t *head)
{
	list_t *act = head;
	list_t *next;

	while (act != NULL)
	{
		next = act->next;
		free(act->str);
		free(act);
		act = next;
	}
}
