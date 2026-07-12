#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*node;

	if (size <= 0)
		return (NULL);

	node = ft_create_elem(strs[size - 1]);
	if (!node)
		return (NULL);

	node->next = ft_list_push_strs(size - 1, strs);
	return (node);
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

// t_list	*ft_list_push_strs(int size, char **strs)
// {
// 	t_list	*list;
// 	int		i;

// 	list = NULL;
// 	i = 0;

// 	while (i < size)
// 	{
// 		ft_list_push_front(&list, strs[i]);
// 		i++;
// 	}
// 	return (list);
// }
