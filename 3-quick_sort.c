#include "sort.h"
/**
  * quick_sort - quicksort algorithm
  * @array: array to be sorted
  * @size: size of array
  */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	sort_alg(array, 0, size - 1, size);
}

/**
  * sort_alg - recursive sorting algorithm
  * @arr: array
  * @left: leftmost index
  * @right: rightmost index
  * @size: full size of array
  */
void sort_alg(int *arr, int left, int right, size_t size)
{
	int pivot;

	if (left < right)
	{
		pivot = split(arr, left, right, size);
		sort_alg(arr, left, pivot - 1, size);
		sort_alg(arr, pivot + 1, right, size);
	}
}

/**
  * split - split array
  * @arr: array
  * @left: leftmost index
  * @right: rightmost index
  * @size: full array size
  * Return: pivot index
  */
int split(int *arr, int left, int right, size_t size)
{
	int x, y, pivot, tmp;

	pivot = arr[right];
	x = left;

	for (y = left; y < right; y++)
	{
		if (arr[y] < pivot)
		{
			if (x != y)
			{
				tmp = arr[y];
				arr[y] = arr[x];
				arr[x] = tmp;
				print_array(arr, size);
			}
			x++;
		}
	}
	if (arr[x] != arr[right])
	{
		tmp = arr[x];
		arr[x] = arr[right];
		arr[right] = tmp;
		print_array(arr, size);
	}

	return (x);
}
