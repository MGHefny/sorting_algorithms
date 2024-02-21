#include "sort.h"

/**
 * swaps - Swap integer array
 * @f: first swap
 * @s: second swap
 */
void swaps(int *f, int *s)
{
	int t;

	t = *f;
	*f = *s;
	*s = t;
}

/**
 * selection_sort - Sort array integer
 * @array: array integer
 * @size: size array
 *
 */
void selection_sort(int *array, size_t size)
{
	int *x;
	size_t y, z;

	if (array == NULL || size < 2)
		return;

	for (y = 0; y < size - 1; y++)
	{
		x = array + y;
		for (z = y + 1; z < size; z++)
			x = (array[z] < *x) ? (array + z) : x;

		if ((array + y) != x)
		{
			swaps(array + y, x);
			print_array(array, size);
		}
	}
}
