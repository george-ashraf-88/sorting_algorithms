#ifndef SORT_H
#define SORT_H

#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void quick_sort(int *array, size_t size);
void sort_alg(int *arr, int left, int right, size_t size);
int split(int *arr, int left, int right, size_t size);
void selection_sort(int *array, size_t size);
void swap(listint_t **head, listint_t *node1, listint_t *node2);
void insertion_sort_list(listint_t **list);
void swap(listint_t **head, listint_t *node1, listint_t *node2);

#endif
