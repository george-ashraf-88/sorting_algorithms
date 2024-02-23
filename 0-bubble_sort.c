#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: Array to sort
 * @size: size of the array
 *
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, y, s = size;
	int tmp, z = 0;

	if (array == NULL || size < 2)
		return;
	for (x = 0; x < size; x++)
	{
		for (y = 1; y < s; y++)
		{
			if (array[y - 1] > array[y])
			{
				z = 1;
				tmp = array[y];
				array[y] = array[y - 1];
				array[y - 1] = tmp;
				print_array(array, size);
			}
		}
		if (z == 0)
			break;
		z = 0;
		s--;
	}
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
  size_t i;

  i = 0;
  while (array && i < size)
    {
      if (i > 0)
	printf(", ");
      printf("%d", array[i]);
      ++i;
    }
  printf("\n");
}
