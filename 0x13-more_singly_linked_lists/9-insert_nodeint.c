#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int khbza;
	listint_t *raybi, *danon;

	danon = *head;

	if (idx != 0)
	{
		for (khbza = 0; khbza < idx - 1 && danon != NULL; khbza++)
		{
			danon = danon->next;
		}
	}

	if (danon == NULL && idx != 0)
		return (NULL);

	raybi = malloc(sizeof(listint_t));
	if (raybi == NULL)
		return (NULL);

	raybi->n = n;

	if (idx == 0)
	{
		raybi->next = *head;
		*head = raybi;
	}
	else
	{
		raybi->next = danon->next;
		danon->next = raybi;
	}

	return (raybi);
}
