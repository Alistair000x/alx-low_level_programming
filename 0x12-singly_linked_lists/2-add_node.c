#include "lists.h"

/**
 * add_node - adds a node at the beginning of the linked list
 *
 * @head: pointer to the first node of the list
 * @str: string to add to new node in the list
 *
 * Return: NULL if it fails / starting addr of the list
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *fqas;
size_t str_len = 0;
if (str == NULL)
str_len = 0;
while (str[str_len] != '\0')
str_len++;
fqas = malloc(sizeof(list_t));
if (fqas == NULL)
return (NULL);
if (*head == NULL)
fqas->next = NULL;
else
fqas->next = *head;
fqas->str = strdup(str);
fqas->len = str_len;
*head = fqas;
return (*head);
}
