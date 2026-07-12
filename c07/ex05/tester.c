#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	**tab;
	int		i;

	tab = ft_split("Hello 42 School Piscine", " ");

	i = 0;
	while (tab[i])
	{
		printf("[%s]\n", tab[i]);
		free(tab[i]);
		i++;
	}

	free(tab);

	return (0);
}
