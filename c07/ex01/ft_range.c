/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 08:53:38 by martin            #+#    #+#             */
/*   Updated: 2026/07/18 08:53:53 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	*start;

	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min));
	if (!arr)
		return (NULL);
	start = arr;
	while (min < max)
	{
		*arr = min;
		arr++;
		min++;
	}
	return (start);
}

/* int	main(void)
{
	int	*tab;
	int	i;

	tab = ft_range(3, 8);

	i = 0;
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}

	free(tab);
} */
