#include "lists.h"
/**
 * pop_listint - deletes head of the node
 * @head: pointer to the first node in the list
 * Return: thr head's node data
 */
int pop_listint(listint_t **head)
{
int casque;
listint_t *hlib, *zbda;
if (*head == NULL)
return (0);
hlib = *head;
zbda = hlib->next;
casque = hlib->n;
free(hlib);
*head = zbda;
return (casque);
}
