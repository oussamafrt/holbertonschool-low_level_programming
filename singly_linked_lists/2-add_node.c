#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to a pointer to the head of the list
 * @str: String to be added to the new node
 *
 * Return: Pointer to the newly added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nv_node;
	int count = 0, i;
	char *duplicate;

	nv_node = malloc(sizeof(list_t));
	if (str == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(nv_node);
		return (NULL);
	}

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(nv_node);
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		count++;
	}
	nv_node->str = duplicate;
	nv_node->next = *head;
	*head = nv_node;
	nv_node->len = count;

	return (nv_node);
}
