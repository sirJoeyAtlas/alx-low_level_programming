#include "lists.h"
int len(const char *str);
/**
 * add_node - adds nodes into singly linked
 * @head: pointer
 * @str: string
 * Return: first node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *first_node;

if (head == NULL)
return (NULL);
first_node = malloc(sizeof(list_t));
if (first_node == NULL)
return (NULL);
if (*head == NULL)

first_node->next = NULL;

else
first_node->next = *head;
first_node->str = strdup(str);
first_node->len = len(str);
*head = first_node;
return (*head);
}

/**
 * len - length of string
 * @str: string
 * Return: length of the string
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
