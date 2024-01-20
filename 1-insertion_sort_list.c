#include "sort.h"
/**
* insertion_sort - sorting array
* Description: it's a bubble sort
* @list: listint_t
* return: list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *p, *n;
	listint_t *nex = *list;
	listint_t *pre = *list;
	listint_t *ref = *list;


	if (list == NULL)
		return;
	nex = nex->next;
	ref = ref->next;
	while (ref != NULL)
	{
		while (pre != NULL)
		{
			p = pre->prev;
			if (nex->n < pre->n)
			{
				if (pre->prev != NULL)
					pre->prev->next = nex;

				if (nex->next != NULL)
					nex->next->prev = pre;

				pre->prev = nex;
				pre->next = nex->next;
				nex->prev = p;
				nex->next = pre;
				if (p == NULL)
					*list = nex;
				print_list(*list);
			}
			pre = p;
		}
		ref = ref->next;
		nex = ref;
		if (nex)
			pre = nex->prev;
	}
}
