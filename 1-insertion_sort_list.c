#include "sort.h"

/**
 * swap_node - Swaps two nodes in a listint_t doubly-linked list.
 * @h: Pointer to the head of the doubly-linked list.
 * @n1: Pointer to first node to swap.
 * @n2: Second node to swap.
 */
void swap_node(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - Sorts doubly linked list
 * using the insertion algoruthm.
 *
 * @list: Pointer to head of doubly-linked list.
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = temp)
	{
		temp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_node(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}
