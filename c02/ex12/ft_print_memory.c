#include <unistd.h>

void	ft_print_hex(int num)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[num / 16], 1);
	write(1, &hex[num % 16], 1);
}

void	ft_print_address(void *addr)
{
	char			*hex;
	char			buffer[16];
	unsigned long	n;
	int				i;

	hex = "0123456789abcdef";
	n = (unsigned long)addr;
	i = 15;
	while (i >= 0)
	{
		buffer[i] = hex[n % 16];
		n /= 16;
		i--;
	}
	i = 0;
	while (i < 16)
	{
		write(1, &buffer[i], 1);
		i++;
	}
}

void	ft_print_ascii(unsigned char *ptr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (ptr[i] >= 32 && ptr[i] <= 126)
			write(1, &ptr[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	ft_print_memory_line(unsigned char *ptr, unsigned int len)
{
	unsigned int	j;

	j = 0;
	while (j < len)
	{
		ft_print_hex(ptr[j]);
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
	while (j < 16)
	{
		if (j % 2 == 0)
			write(1, "  ", 2);
		else
			write(1, "   ", 3);
		j++;
	}
	ft_print_ascii(ptr, len);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;
	unsigned int	len;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		len = size - i;
		if (len > 16)
			len = 16;
		ft_print_address(ptr + i);
		write(1, ": ", 2);
		ft_print_memory_line(ptr + i, len);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}

// int	ft_strlen(char *str)
// {
// 	int	len;

// 	len = 0;
// 	while (*str)
// 	{
// 		len++;
// 		str++;
// 	}
// 	return (len);
// }

// int main()
// {
// 	char str[] = "Bonjour les amin"
// 				 "ches\t\n\tc\a est fo"
// 				 "u\ttout\tce qu on "
// 				 "peut faire avec\t"
// 				 "\n\tprint_memory\n\n"
// 				 "\n\tlol.lol\n \0";
// 	ft_print_memory(str, ft_strlen(str) + 1);
// }
