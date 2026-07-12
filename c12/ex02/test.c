#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	if (!begin_list)
		return ;

	node = ft_create_elem(data);
	if (!node)
		return ;

	node->next = *begin_list;
	*begin_list = node;
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


void	free_list(t_list *list)
{
	t_list	*tmp;

	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
}

void	test_empty_list(void)
{
	t_list	*list;

	printf("=== EMPTY LIST TEST ===\n");

	list = NULL;

	printf("Size: %d\n", ft_list_size(list));

	printf("\n");
}

void	test_one_element(void)
{
	t_list	*list;

	printf("=== ONE ELEMENT TEST ===\n");

	list = NULL;

	ft_list_push_front(&list, "Hello");

	printf("Size: %d\n", ft_list_size(list));

	free_list(list);

	printf("\n");
}

void	test_multiple_elements(void)
{
	t_list	*list;

	printf("=== MULTIPLE ELEMENTS TEST ===\n");

	list = NULL;

	ft_list_push_front(&list, "A");
	ft_list_push_front(&list, "B");
	ft_list_push_front(&list, "C");
	ft_list_push_front(&list, "D");

	printf("Size: %d\n", ft_list_size(list));

	free_list(list);

	printf("\n");
}

void	test_list_unchanged(void)
{
	t_list	*list;
	t_list	*original;

	printf("=== LIST UNCHANGED TEST ===\n");

	list = NULL;

	ft_list_push_front(&list, "A");
	ft_list_push_front(&list, "B");
	ft_list_push_front(&list, "C");

	original = list;

	printf("Size before: %d\n", ft_list_size(list));
	printf("First element: %s\n", (char *)list->data);

	printf("Same pointer: %s\n",
		original == list ? "YES" : "NO");

	free_list(list);

	printf("\n");
}

int	main(void)
{
	test_empty_list();
	test_one_element();
	test_multiple_elements();
	test_list_unchanged();

	return (0);
}

// === EMPTY LIST TEST ===
// Size: 0

// === ONE ELEMENT TEST ===
// Size: 1

// === MULTIPLE ELEMENTS TEST ===
// Size: 4

// === LIST UNCHANGED TEST ===
// Size before: 3
// First element: C
// Same pointer: YES
