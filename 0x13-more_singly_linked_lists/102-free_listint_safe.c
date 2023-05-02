#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: double pointer to the head of the list.
 *
 * Return: the size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *kalb, *khbza;
size_t math = 0;
if (h == NULL || *h == NULL)
return (math);
while (*h != NULL)
{
math++;
kalb = *h;
*h = (*h)->next;
free(kalb);
khbza = *h;
while (khbza != NULL && khbza < kalb)
khbza = khbza->next;
if (khbza == kalb)
break;
}
*h = NULL;
return (math);
}
