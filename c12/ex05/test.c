#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs);

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
	char	**strs;
	t_list	*list;

	printf("=== EMPTY LIST TEST ===\n");

	strs = NULL;

	list = ft_list_push_strs(0, strs);

	printf("List: %p\n", (void *)list);

	printf("\n");
} 

void	test_one_string(void)
{
	char	*strs[] = {"Hello"};
	t_list	*list;

	printf("=== ONE STRING TEST ===\n");

	list = ft_list_push_strs(1, strs);

	print_list(list);

	free_list(list);

	printf("\n");
}

void	test_multiple_strings(void)
{
	char	*strs[] = {
		"one",
		"two",
		"three",
		"four"
	};
	t_list	*list;

	printf("=== MULTIPLE STRINGS TEST ===\n");

	list = ft_list_push_strs(4, strs);

	print_list(list);

	free_list(list);

	printf("\n");
}

void	test_last_element(void)
{
	char	*strs[] = {
		"A",
		"B",
		"C"
	};
	t_list	*list;
	t_list	*last;

	printf("=== LAST ELEMENT TEST ===\n");

	list = ft_list_push_strs(3, strs);

	last = list;

	while (last->next)
		last = last->next;

	printf("Last data: %s\n", (char *)last->data);
	printf("Last next: %p\n", (void *)last->next);

	free_list(list);

	printf("\n");
}

void	test_null_data(void)
{
	char	*strs[] = {
		"A",
		NULL,
		"C"
	};
	t_list	*list;

	printf("=== NULL DATA TEST ===\n");

	list = ft_list_push_strs(3, strs);

	print_list(list);

	free_list(list);

	printf("\n");
}

int	main(void)
{
	test_empty_list();
	test_one_string();
	test_multiple_strings();
	test_last_element();
	test_null_data();

	return (0);
}
