#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);

void	print_list(t_list *list)
{
	printf("[ ");

	while (list)
	{
		printf("%s ", (char *)list->data);
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

	printf("=== TEST EMPTY LIST ===\n");

	list = NULL;

	ft_list_push_front(&list, "Hello");

	print_list(list);

	free_list(list);
	printf("\n");
}

void	test_multiple_insertions(void)
{
	t_list	*list;

	printf("=== TEST MULTIPLE INSERTIONS ===\n");

	list = NULL;

	ft_list_push_front(&list, "A");
	ft_list_push_front(&list, "B");
	ft_list_push_front(&list, "C");

	print_list(list);

	free_list(list);
	printf("\n");
}

void	test_null_data(void)
{
	t_list	*list;

	printf("=== TEST NULL DATA ===\n");

	list = NULL;

	ft_list_push_front(&list, NULL);

	printf("data = %p\n", list->data);
	printf("next = %p\n", (void *)list->next);

	free_list(list);
	printf("\n");
}

void	test_null_begin_list(void)
{
	printf("=== TEST NULL BEGIN LIST ===\n");

	ft_list_push_front(NULL, "Crash test");

	printf("No crash\n\n");
}

int	main(void)
{
	test_empty_list();
	test_multiple_insertions();
	test_null_data();
	test_null_begin_list();

	return (0);
}
