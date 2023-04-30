#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 *            at the end of the node
 *
 * @head: pointer to the first node of the list
 * @n: element int to add to new node
 *
 * Return: address of the new element or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *rayb, *zbda;

	rayb = malloc(sizeof(listint_t));
	if (rayb == NULL)
		return (NULL);

	rayb->n = n;
	rayb->next = NULL;

	zbda = *head;

	if (zbda == NULL)
		*head = rayb;
	else
	{
		while (zbda->next != NULL)
			zbda = zbda->next;
		zbda->next = rayb;
	}

	return (*head);
}
