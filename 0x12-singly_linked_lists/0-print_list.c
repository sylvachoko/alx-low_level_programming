#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
const list_t *lst;
unsigned int i;
lst = h;
for (i = 0; lst; i++)
{
printf("[%u] %s\n", lst->len, lst->str);
lst = lst->next;
}
return (i);
}