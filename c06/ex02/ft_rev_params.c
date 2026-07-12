#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	**start;

	start = argv;
	while (*argv)
		argv++;

	while (argv > start + 1)
	{
		argv--;
		str = *argv;
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
