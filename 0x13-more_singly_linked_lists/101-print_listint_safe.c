#include "lists.h"
/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *khbza, *lemon;
	size_t danon = 0;

	if (head == NULL)
		exit(98);

	khbza = head;
	while (khbza != NULL)
	{
		danon++;
		printf("[%p] %d\n", (void *)khbza, khbza->n);
		lemon = khbza->next;
		if (lemon >= khbza)
		{
			printf("-> [%p] %d\n", (void *)khbza, khbza->n);
			exit(98);
		}
		khbza = lemon;
	}

	return (danon);
}
