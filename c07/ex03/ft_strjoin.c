/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 09:00:16 by martin            #+#    #+#             */
/*   Updated: 2026/07/18 09:06:43 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_getlen(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	return (total + ft_strlen(sep) * (size - 1));
}

void	ft_copy(char **dst, char *src)
{
	while (*src)
	{
		**dst = *src;
		(*dst)++;
		src++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*start;
	int		i;

	if (size == 0)
	{
		result = malloc(1);
		if (result)
			*result = '\0';
		return (result);
	}
	result = malloc(ft_getlen(size, strs, sep) + 1);
	if (!result)
		return (NULL);
	start = result;
	i = 0;
	while (i < size)
	{
		ft_copy(&result, strs[i]);
		if (i < size - 1)
			ft_copy(&result, sep);
		i++;
	}
	*result = '\0';
	return (start);
}

/* int	main(void)
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
} */
