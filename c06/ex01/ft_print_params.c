#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;

	argv++;
	while (*argv)
	{
		str = *argv;
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
		argv++;
	}
	return (0);
}
