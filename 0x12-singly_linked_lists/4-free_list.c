#include "lists.h"

/**
 * free_list - free single list link
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
*/
void free_list(list_t *head)
{
list_t *tajin;
while ((tajin = head) != NULL)
{
head = head->next;
free(tajin->str);
free(tajin);
}
}
