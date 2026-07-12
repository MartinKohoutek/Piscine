#include <stdlib.h>
#include <stdio.h>

int	ft_valid_base(char *base);
int	ft_atoi_base(char *nbr, char *base);
char	*ft_putnbr_base(int nbr, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	number;

	if (!ft_valid_base(base_from) || !ft_valid_base(base_to))
		return (NULL);

	number = ft_atoi_base(nbr, base_from);
	return (ft_putnbr_base(number, base_to));
}


int	main(void)
{
	char	*result;

	result = ft_convert_base("101010", "01", "0123456789");

	printf("%s\n", result);
	free(result);

	result = ft_convert_base("-42", "0123456789", "01");

	printf("%s\n", result);
	free(result);

	result = ft_convert_base("FF", "0123456789ABCDEF", "0123456789");

	printf("%s\n", result);
	free(result);

	return (0);
}
