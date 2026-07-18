/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 08:57:11 by martin            #+#    #+#             */
/*   Updated: 2026/07/18 08:57:43 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	ptr = malloc(sizeof(int) * size);
	if (!ptr)
		return (-1);
	*range = ptr;
	while (min < max)
	{
		*ptr = min;
		ptr++;
		min++;
	}
	return (size);
}

/* int	main(void)
{
	int	*tab;
	int	size;
	int	i;

	size = ft_ultimate_range(&tab, 3, 8);

	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}

	free(tab);
} */
