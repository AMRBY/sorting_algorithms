#include "sort.h"
/**
* insertion_sort - sorting array
* Description: it's a bubble sort
* @list: listint_t
* return: list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *p;
	listint_t *nex = (*list)->next;
	listint_t *pre = *list;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	while (nex != NULL)
	{
		pre = nex->prev;
		while (pre != NULL && nex->n < pre->n)
		{
			p = pre->prev;
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
			pre = p;
		}
		nex = nex->next;
	}
}
