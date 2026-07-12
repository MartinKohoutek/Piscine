int	is_alnum(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first;

	i = 0;
	first = 1;
	while (str[i])
	{
		if (is_alnum(str[i]))
		{
			if (first && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!first && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			first = 0;
		}
		else
			first = 1;
		i++;
	}
	return (str);
}
