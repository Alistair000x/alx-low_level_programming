#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the
 * beginning of a list
 *
 * @head: pointer to the first node
 * @n: integer n to add in a new node
 *
 * Return: address of the new element or NULL if it fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *zitona;
zitona = malloc(sizeof(listint_t));
if (zitona == NULL)
return (NULL);
if (*head == NULL)
zitona->next = NULL;
else
zitona->next = *head;
zitona->n = n;
*head = zitona;
return (*head);
}
