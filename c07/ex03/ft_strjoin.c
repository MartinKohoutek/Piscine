#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*start;
	char	*src;
	int		total;
	int		i;

	if (size == 0)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		*result = '\0';
		return (result);
	}

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += ft_strlen(sep) * (size - 1);

	result = malloc(total + 1);
	if (!result)
		return (NULL);

	start = result;

	i = 0;
	while (i < size)
	{
		src = strs[i];
		while (*src)
		{
			*result = *src;
			result++;
			src++;
		}

		if (i < size - 1)
		{
			src = sep;
			while (*src)
			{
				*result = *src;
				result++;
				src++;
			}
		}
		i++;
	}

	*result = '\0';

	return (start);
}

int	main(void)
{
	char	*strs[] = {"Hello", "42", "Prague"};
	char	*result;

	result = ft_strjoin(3, strs, " - ");

	if (result)
	{
		printf("Result: %s\n", result);
		free(result);
	}

	return (0);
}
