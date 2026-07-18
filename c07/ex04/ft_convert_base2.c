/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 09:13:06 by martin            #+#    #+#             */
/*   Updated: 2026/07/18 09:38:13 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	char	*start;

	start = str;
	while (*str)
		str++;
	return (str - start);
}

int	ft_num_len(long nbr, int base_len)
{
	int	len;

	len = 1;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr >= base_len)
	{
		nbr /= base_len;
		len++;
	}
	return (len);
}

void	ft_fill_base(char *result, long nbr, char *base, int pos)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	if (nbr >= base_len)
		ft_fill_base(result, nbr / base_len, base, pos - 1);
	result[pos] = base[nbr % base_len];
}

char	*ft_putnbr_base(int nbr, char *base)
{
	char	*result;
	long	number;
	int		len;

	number = nbr;
	len = ft_num_len(number, ft_strlen(base));
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	ft_fill_base(result, number, base, len - 1);
	return (result);
}
