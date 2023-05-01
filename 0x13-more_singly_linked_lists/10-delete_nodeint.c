#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of a list.
 * @index: index of the list where the node is deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hug, *kalb;
	unsigned int love;

	hug = *head;

	if (index != 0)
	{
		for (love = 0; love < index - 1 && hug != NULL; love++)
		{
			hug = hug->next;
		}
	}

	if (hug == NULL || (hug->next == NULL && index != 0))
	{
		return (-1);
	}

	kalb = hug->next;

	if (index != 0)
	{
		hug->next = kalb->next;
		free(kalb);
	}
	else
	{
		free(hug);
		*head = kalb;
	}

	return (1);
}
