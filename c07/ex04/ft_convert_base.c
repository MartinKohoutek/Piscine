/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 09:10:45 by martin            #+#    #+#             */
/*   Updated: 2026/07/18 09:43:54 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_putnbr_base(int nbr, char *base);

int	ft_check_base(char *base)
{
	char	*start;
	char	*ptr;

	start = base;
	while (*base)
	{
		if (*base == '+' || *base == '-'
			|| *base == ' ' || (*base >= 9 && *base <= 13))
			return (0);
		ptr = base + 1;
		while (*ptr)
		{
			if (*base == *ptr)
				return (0);
			ptr++;
		}
		base++;
	}
	if (base - start < 2)
		return (0);
	return (1);
}

int	ft_get_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_convert(char *str, char *base)
{
	int	result;
	int	value;
	int	base_len;

	result = 0;
	base_len = ft_strlen(base);
	value = ft_get_value(*str, base);
	while (value != -1)
	{
		result = result * base_len + value;
		str++;
		value = ft_get_value(*str, base);
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;

	if (!ft_check_base(base))
		return (0);
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	return (ft_convert(str, base) * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	number;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	return (ft_putnbr_base(number, base_to));
}

// int	main(void)
// {
// 	char	*result;

// 	result = ft_convert_base("101010", "01", "0123456789");

// 	printf("%s\n", result);
// 	free(result);

// 	result = ft_convert_base("-42", "0123456789", "01");

// 	printf("%s\n", result);
// 	free(result);

// 	result = ft_convert_base("FF", "0123456789ABCDEF", "0123456789");

// 	printf("%s\n", result);
// 	free(result);

// 	return (0);
// }
