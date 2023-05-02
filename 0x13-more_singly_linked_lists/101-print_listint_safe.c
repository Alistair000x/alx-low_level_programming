#include "lists.h"
/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *zbda, *tajine;
	size_t math = 0;
	if (head == NULL)
		exit(98);
	zbda = head;
	while (zbda != NULL)
	{
		math++;
		printf("[%p] %d\n", (void *) zbda, zbda->n);
		tajine = zbda->next;
		if (tajine >= zbda)
			break;
		zbda = tajine;
	}
	if (zbda != NULL && tajine >= zbda)
	{
		printf("-> [%p] %d\n", (void *) zbda, zbda->n);
		exit(98);
	}
	return (lemon);
}

