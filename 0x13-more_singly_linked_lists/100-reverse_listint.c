#include "lists.h"
/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *banan = NULL;
listint_t *khbza = *head;
while (khbza != NULL)
{
listint_t *danon = khbza->next;
khbza->next = banan;
banan = khbza;
khbza = danon;
}
*head = banan;
return (*head);
}
