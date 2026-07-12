int	ft_find_min_index(int *tab, int start, int size)
{
	int	min;
	int	min_index;

	min = tab[start];
	min_index = start;
	start++;
	while (start < size)
	{
		if (tab[start] < min)
		{
			min = tab[start];
			min_index = start;
		}
		start++;
	}
	return (min_index);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	min_index;

	i = 0;
	while (i < size - 1)
	{
		min_index = ft_find_min_index(tab, i, size);
		ft_swap(&tab[i], &tab[min_index]);
		i++;
	}
}
