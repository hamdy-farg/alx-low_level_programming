#include "lists.h"
/**
* add_dnodeint - adsgadg
* @head: dgaa
* @n: agdadsg
* Return: fadsf
*/


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}

new->n = n;
new->next = NULL;

if (*head != NULL)
{
dlistint_t *current = *head;
while (current->next != NULL)
current = current->next;
current->next = new;
new->prev = current;
return (new);
}
*head = new;
return (new);
}
