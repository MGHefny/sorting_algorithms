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
 * bubble_sort - Sort array order
 * @array: array integer sort
 * @size: size array
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, l = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (x = 0; x < l - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				swaps(array + x, array + x + 1);
				p_arr(array, size);
				bubbly = false;
			}
		}
		l--;
	}
}
