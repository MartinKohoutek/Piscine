#include <unistd.h>

int	ft_is_safe(int *queens, int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (queens[i] == row)
			return (0);
		if (queens[i] - i == row - col)
			return (0);
		if (queens[i] + i == row + col)
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_solution(int *queens)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = queens[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_solve(int *queens, int col)
{
	int	row;
	int	count;

	if (col == 10)
	{
		ft_print_solution(queens);
		return (1);
	}
	count = 0;
	row = 0;
	while (row < 10)
	{
		if (ft_is_safe(queens, col, row))
		{
			queens[col] = row;
			count += ft_solve(queens, col + 1);
		}
		row++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	queens[10];

	return (ft_solve(queens, 0));
}
