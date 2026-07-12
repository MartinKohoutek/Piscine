#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*last;

	if (!begin_list)
		return ;

	new = ft_create_elem(data);
	if (!new)
		return ;

	if (!*begin_list)
	{
		*begin_list = new;
		return ;
	}

	last = *begin_list;
	while (last->next)
		last = last->next;

	last->next = new;
}

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

