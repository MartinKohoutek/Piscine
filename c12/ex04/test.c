#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);

t_list	*ft_list_last(t_list *begin_list)
{
	if (!begin_list)
		return (NULL);

	while (begin_list->next)
		begin_list = begin_list->next;

	return (begin_list);
}

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

void	print_list(t_list *list)
{
	printf("[ ");

	while (list)
	{
		if (list->data)
			printf("%s ", (char *)list->data);
		else
			printf("NULL ");

		list = list->next;
	}

	printf("]\n");
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

	ft_list_push_back(&list, "A");

	print_list(list);

	free_list(list);

	printf("\n");
}

void	test_multiple_insertions(void)
{
	t_list	*list;

	printf("=== MULTIPLE INSERTIONS TEST ===\n");

	list = NULL;

	ft_list_push_back(&list, "A");
	ft_list_push_back(&list, "B");
	ft_list_push_back(&list, "C");
	ft_list_push_back(&list, "D");

	print_list(list);

	free_list(list);

	printf("\n");
}

void	test_push_back_after_push_front(void)
{
	t_list	*list;

	printf("=== PUSH FRONT + PUSH BACK TEST ===\n");

	list = NULL;

	ft_list_push_front(&list, "B");
	ft_list_push_front(&list, "A");
	ft_list_push_back(&list, "C");
	ft_list_push_back(&list, "D");

	print_list(list);

	free_list(list);

	printf("\n");
}

void	test_null_data(void)
{
	t_list	*list;

	printf("=== NULL DATA TEST ===\n");

	list = NULL;

	ft_list_push_back(&list, NULL);

	print_list(list);

	printf("data = %p\n", list->data);
	printf("next = %p\n", (void *)list->next);

	free_list(list);

	printf("\n");
}

void	test_last_element(void)
{
	t_list	*list;
	t_list	*last;

	printf("=== LAST ELEMENT TEST ===\n");

	list = NULL;

	ft_list_push_back(&list, "A");
	ft_list_push_back(&list, "B");
	ft_list_push_back(&list, "C");

	last = ft_list_last(list);

	printf("Last data: %s\n", (char *)last->data);
	printf("Last next: %p\n", (void *)last->next);

	free_list(list);

	printf("\n");
}

int	main(void)
{
	test_empty_list();
	test_multiple_insertions();
	test_push_back_after_push_front();
	test_null_data();
	test_last_element();

	return (0);
}

// === EMPTY LIST TEST ===
// [ A ]

// === MULTIPLE INSERTIONS TEST ===
// [ A B C D ]

// === PUSH FRONT + PUSH BACK TEST ===
// [ A B C D ]

// === NULL DATA TEST ===
// [ NULL ]
// data = (nil)
// next = (nil)

// === LAST ELEMENT TEST ===
// Last data: C
// Last next: (nil)
