#include "lists.h"
/**
 * print_listint_safe - prints a linked list (even with a loop)
 * @head: pointer to the head node of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *pain, *hate;
    size_t math = 0;

    if (!head)
        exit(98);
    pain = hate = head;
    while (pain && hate && hate->next)
    {
        pain = pain->next;
        hate = hate->next->next;

        if (pain == hate)
        {
            printf("-> [%p] %d\n", (void *)pain, pain->n);
            exit(98);
        }

        printf("[%p] %d\n", (void *)pain, pain->n);
        math++;
    }
    printf("[%p] %d\n", (void *)pain, pain->n);
    math++;

    return math;
}
