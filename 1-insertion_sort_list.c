#include "sort.h"

/**
 * swaps - Swap doubly linked list
 * @h: head doubly-linked list
 * @f: first node
 * @s: second node
 */
void swaps(listint_t **h, listint_t **f, listint_t *s)
{
	(*f)->next = s->next;
	if (s->next != NULL)
		s->next->prev = *f;
	s->prev = (*f)->prev;
	s->next = *f;
	if ((*f)->prev != NULL)
		(*f)->prev->next = s;
	else
		*h = s;
	(*f)->prev = s;
	*f = s->prev;
}

/**
 * insertion_sort_list - Sort doubly linked list integer
 * @list: head doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *x, *y, *z;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (x = (*list)->next; x != NULL; x = z)
	{
		z = x->next;
		y = x->prev;
		while (y != NULL && x->n < y->n)
		{
			swaps(list, &y, x);
			print_list((const listint_t *)*list);
		}
	}
}
