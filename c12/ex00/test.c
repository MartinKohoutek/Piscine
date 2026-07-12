#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	test_int(void)
{
	int		value;
	t_list	*node;

	value = 42;
	node = ft_create_elem(&value);

	printf("=== INT TEST ===\n");
	printf("data = %d\n", *(int *)node->data);
	printf("next = %p\n\n", (void *)node->next);

	free(node);
}

void	test_string(void)
{
	char	*str;
	t_list	*node;

	str = "Hello Piscine!";
	node = ft_create_elem(str);

	printf("=== STRING TEST ===\n");
	printf("data = %s\n", (char *)node->data);
	printf("next = %p\n\n", (void *)node->next);

	free(node);
}

void	test_null(void)
{
	t_list	*node;

	node = ft_create_elem(NULL);

	printf("=== NULL TEST ===\n");
	printf("data = %p\n", node->data);
	printf("next = %p\n\n", (void *)node->next);

	free(node);
}

int	main(void)
{
	test_int();
	test_string();
	test_null();

	return (0);
}
