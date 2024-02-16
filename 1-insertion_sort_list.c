#include "sort.h"
/**
 * swap - Swap two nodes in a listint_t doubly-linked list.
 * @list: A pointer to the head of the doubly-linked list.
 * @node1: A pointer to the first node to swap.
 * @node2: The second node to swap.
 */
void swap(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;
	else
		*list = node2;
	if (node2->next)
		node2->next->prev = node1;
	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}


/**
 * insertion_sort_list - Sort an array of integers in ascending order.
 * @list: pointer of the list
 * Return:void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
        if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current)
	{
		while (current->prev && current->prev->n > current->n)
		{
			swap(list, current->prev, current);
			print_list(*list);
		}
		current = current->next;
	}
}
