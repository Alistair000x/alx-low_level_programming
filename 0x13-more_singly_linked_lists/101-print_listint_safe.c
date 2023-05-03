#include "lists.h"
/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
listp_t *zbda, *khbza;
{
if (head != NULL)
{
zbda = *head;
while ((khbza = zbda) != NULL)
{
zbda = zbda->next;
free(khbza);
}
*head = NULL;
}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t math = 0;
listp_t *labani, *lemon, *tfah;
labani = NULL;
while (head != NULL)
{
lemon = malloc(sizeof(listp_t));
if (lemon == NULL)
exit(98);
lemon->p = (void *)head;
lemon->next = labani;
labani = lemon;
tfah = labani;
while (tfah->next != NULL)
{
tfah = tfah->next;
if (head == tfah->p)
{
printf("-> [%p] %d\n", (void *)head, head->n);
free_listp(&labani);
return (math);
}
}
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
math++;
}
free_listp(&labani);
return (math);
}
