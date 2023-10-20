#include "lists.h"
int len(const char *str);
list_t *create_node(const char *str);
/**
 * add_node_end - adds nodes to stingly linked
 * @head: header
 * @str: string
 * Return: nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *tmp;
list_t *first_node;

tmp = *head;
if (head == NULL)
{
return (NULL);
}
first_node = create_node(str);
if (first_node == NULL)
return (NULL);
if (*head == NULL)
{
*head = first_node;
return (*head);
}
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = first_node;
return (*head);
}
/**
 * create_node - creates a node
 * @str: string
 * Return: the pointer to the node
 */
list_t *create_node(const char *str)
{
list_t *first_node;

first_node = malloc(sizeof(list_t));
if (first_node == NULL)
return (NULL);
first_node->str = strdup(str);
first_node->len = len(str);
first_node->next = NULL;
return (first_node);
}
/**
 * len - length of the node
 * @str: string
 * Return: no of nodes
 */
int len(const char *str)
{
int i;

if (str == NULL)
return (0);

i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}
