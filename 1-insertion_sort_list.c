#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list with
 * the insertion sort algorithm
 *
 * @list: list to be sorted
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *x, *p;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (x = (*list)->next; x && x->prev; x = x->next)
	{
		for (; x && x->prev && x->n < x->prev->n;
		     x = x->prev)
		{
			p = x->prev;
			swap(list, p, x);
			print_list(*list);
			x = x->next;
		}
	}
}

/**
 * swap - swaps two nodes
 * @head: the head node
 * @node1: The first node
 * @node2: the second node
 *
 * Return: void
 */
void swap(listint_t **head, listint_t *node1, listint_t *node2)
{
	listint_t *prev, *next;

	prev = node1->prev;
	next = node2->next;

	if (prev != NULL)
		prev->next = node2;
	else
		*head = node2;
	node1->prev = node2;
	node1->next = next;
	node2->prev = prev;
	node2->next = node1;
	if (next)
		next->prev = node1;
}
