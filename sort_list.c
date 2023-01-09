#include "sort_list.h"
#include <stdlib.h>

/*int	cmp(int a, int b)
{
	return (a <= b);
}*/

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		swap;
	t_list	*tmp;

	tmp = lst;

	while (lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

/*#include <stdio.h>
int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = (t_list *)malloc(sizeof(t_list));
	b = (t_list *)malloc(sizeof(t_list));
	c = (t_list *)malloc(sizeof(t_list));

	a->data = 5;
	a->next = b;
	b->data = 4;
	b->next = c;
	c->data = 7;
	c->next = NULL;

	sort_list(a, &cmp);
	printf("%d\n", a->data);
	printf("%d\n", a->next->data);
	printf("%d\n", a->next->next->data);
	return (0);
}*/
