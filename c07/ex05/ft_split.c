/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 10:09:09 by martin            #+#    #+#             */
/*   Updated: 2026/07/18 10:10:08 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!ft_is_sep(*str, charset) && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (ft_is_sep(*str, charset))
			in_word = 0;
		str++;
	}
	return (count);
}

int	ft_word_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] && !ft_is_sep(str[len], charset))
		len++;
	return (len);
}

char	*ft_strdup_word(char *str, int len)
{
	char	*word;
	int		i;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		words;
	int		i;

	words = ft_count_words(str, charset);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && ft_is_sep(*str, charset))
			str++;
		if (*str)
		{
			result[i] = ft_strdup_word(str,
					ft_word_len(str, charset));
			i++;
			while (*str && !ft_is_sep(*str, charset))
				str++;
		}
	}
	result[i] = NULL;
	return (result);
}

/* int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("Hello,,world this,is a test", ", ");
	if (!result)
		return (1);

	i = 0;
	while (result[i])
	{
		printf("[%d] = \"%s\"\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);

	return (0);
}
 */
