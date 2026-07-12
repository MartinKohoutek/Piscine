#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list);

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
	t_list	*last;

	printf("=== EMPTY LIST TEST ===\n");

	list = NULL;

	last = ft_list_last(list);

	printf("Last element: %p\n", (void *)last);

	printf("\n");
}

void	test_one_element(void)
{
	t_list	*list;
	t_list	*last;

	printf("=== ONE ELEMENT TEST ===\n");

	list = NULL;

	ft_list_push_front(&list, "Hello");

	last = ft_list_last(list);

	printf("Last data: %s\n", (char *)last->data);
	printf("Same pointer: %s\n",
		last == list ? "YES" : "NO");

	free_list(list);

	printf("\n");
}

void	test_multiple_elements(void)
{
	t_list	*list;
	t_list	*last;

	printf("=== MULTIPLE ELEMENTS TEST ===\n");

	list = NULL;

	ft_list_push_front(&list, "A");
	ft_list_push_front(&list, "B");
	ft_list_push_front(&list, "C");

	last = ft_list_last(list);

	printf("Last data: %s\n", (char *)last->data);
	printf("Last next: %p\n", (void *)last->next);

	free_list(list);

	printf("\n");
}

void	test_list_structure(void)
{
	t_list	*list;
	t_list	*last;

	printf("=== STRUCTURE TEST ===\n");

	list = NULL;

	ft_list_push_front(&list, "First");
	ft_list_push_front(&list, "Second");
	ft_list_push_front(&list, "Third");

	last = ft_list_last(list);

	printf("First element: %s\n", (char *)list->data);
	printf("Last element: %s\n", (char *)last->data);

	printf("\n");

	free_list(list);
}

int	main(void)
{
	test_empty_list();
	test_one_element();
	test_multiple_elements();
	test_list_structure();

	return (0);
}

// === EMPTY LIST TEST ===
// Last element: (nil)

// === ONE ELEMENT TEST ===
// Last data: Hello
// Same pointer: YES

// === MULTIPLE ELEMENTS TEST ===
// Last data: A
// Last next: (nil)

// === STRUCTURE TEST ===
// First element: Third
// Last element: First
