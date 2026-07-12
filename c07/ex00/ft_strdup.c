#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*start;
	int		len;

	len = 0;
	while (src[len])
		len++;

	dest = malloc(len + 1);
	if (!dest)
		return (NULL);

	start = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *copy;

	copy = ft_strdup("Hello 42");
	printf("%s\n", copy);

	free(copy);
	return (0);
}
