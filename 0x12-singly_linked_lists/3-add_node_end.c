#include "lists.h"

/**
 * add_node_end - adds a node at the end of the linked list
 *
 * @head: pointer to the first node of the list
 * @str: string to add
 *
 * Return: NULL if it fails / starting addr of the list
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *fqas, *atay;
size_t str_len = 0;
if (str == NULL)
str_len = 0;
while (str[str_len] != '\0')
str_len++;
fqas = malloc(sizeof(list_t));
if (fqas == NULL)
return (NULL);
fqas->str = strdup(str);
fqas->len = str_len;
fqas->next = NULL;
atay = *head;
if (atay == NULL)
*head = fqas;
else
{
while (atay->next != NULL)
atay = atay->next;
atay->next = fqas;
}
return (*head);
}
