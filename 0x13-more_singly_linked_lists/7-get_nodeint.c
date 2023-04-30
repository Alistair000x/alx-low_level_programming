#include "lists.h"
/**
 * get_nodeint_at_index - get node
 * @head: pointer to the first node of the list
 * @index: no of node to access
 * Return: node at nth index or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int dghmira;
for (dghmira = 0; dghmira < index && head != NULL; dghmira++)
head = head->next;
return (head);
}
