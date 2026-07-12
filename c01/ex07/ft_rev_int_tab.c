void ft_rev_int_tab(int *tab, int size)
{
	int *start = tab;
	int *end = tab + size - 1;
	int tmp;

	if (size <= 1)
		return;
	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
