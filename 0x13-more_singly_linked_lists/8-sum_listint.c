#include "lists.h"
/**
 * sum_listint - a function that return the sum of all the data
 * @head: pointer to the first node of the list
 * Return: the sum of all
 */
int sum_listint(listint_t *head)
{
int bimo = 0;
while (head != NULL)
{
bimo += head->n;
head = head->next;
}
return (bimo);
}
