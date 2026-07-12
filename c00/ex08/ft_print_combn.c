#include <unistd.h>

void ft_print_comb(char *arr, int n)
{
	int i;
	char c;

	i = 0;
	while (i < n)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
		i++;
	}
}

void ft_rec(char *arr, int n, int pos, int start)
{
	int i;

	if (pos == n)
	{
		ft_print_comb(arr, n);
		if (!(arr[0] == 10 - n))
			write(1, ", ", 2);
		return;
	}

	i = start;
	while (i <= 9)
	{
		arr[pos] = i;
		ft_rec(arr, n, pos + 1, i + 1);
		i++;
	}
}

void ft_print_combn(int n)
{
	char arr[10];

	if (n <= 0 || n >= 10)
		return;

	ft_rec(arr, n, 0, 0);
}

// rec([],0,0)
//   └── rec([0],1,1)
//        ├── rec([0,1],2,2) → 01
//        ├── rec([0,2],2,3) → 02
//        ├── rec([0,3],2,4) → 03

// rec([],0,0)
//   └── rec([0],1,1)
//        └── rec([0,1],2,2)
//             ├── rec([0,1,2],3,3) → 012
//             ├── rec([0,1,3],3,4) → 013
//             ├── rec([0,1,4],3,5) → 014
//             ├── rec([0,1,5],3,6) → 015
//             ├── rec([0,1,6],3,7) → 016
//             ├── rec([0,1,7],3,8) → 017
//             ├── rec([0,1,8],3,9) → 018
//             ├── rec([0,1,9],3,10) → 019
//   		├── rec([0,2],2,3)
//             ├── rec([0,2,3],3,4) → 023
//             ├── rec([0,2,4],3,5) → 024
//             ├── rec([0,2,5],3,6) → 025
//             ├── rec([0,2,6],3,7) → 026
//             ├── rec([0,2,7],3,8) → 027
//             ├── rec([0,2,8],3,9) → 028
//             ├── rec([0,2,9],3,10) → 029
