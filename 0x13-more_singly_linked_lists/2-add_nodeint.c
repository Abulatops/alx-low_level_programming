#include "lists.h"
/**
* add_nodeint - adds a new node at the beginning of a linked list
* @head: pointer to the first node in the list
* @n: data to insert in that new node
*
* Return: pointer to the new node, or NULL if it fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nep;
nep = malloc(sizeof(listint_t));
if (!nep)
retu6rn (NULL);
nep->n = n;
nep->next = *head;
*head = nep;
return (nep);
}
