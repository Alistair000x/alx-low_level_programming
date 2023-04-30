#include "lists.h"
/**
 * insert_nodeint_at_index - a function that insert a new node
 * @head: pointer to the first node of the list
 * @idx: is the index of the list where the new node should be added
 * @n: element to add to the new node
 * Return: NULL if anything fails or the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *juice, *raybi;
unsigned int khbza;
raybi = *head;
juice = malloc(sizeof(listint_t));
if ((*head == NULL && idx != 0) || juice == NULL)
return (NULL);
juice->n = n;
for (khbza = 0; head != NULL && khbza < idx - 1; khbza++)
{
raybi = raybi->next;
if (raybi == NULL)
return (NULL);
}
if (idx == 0)
{
juice->next = *head;
*head = juice;
}
else if (raybi->next)
{
juice->next = raybi->next;
raybi->next = juice;
}
else
{
juice->next = NULL;
raybi->next = juice;
}
return (juice);
}
