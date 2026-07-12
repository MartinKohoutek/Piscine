#include "mini_test.h"

void ft_ultimate_ft(int *********nbr);

static void test_chain(int value)
{
	int n;
	int *p1 = &n;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;

	n = value;
	ft_ultimate_ft(p9);
	assert_int("ft_ultimate_ft chain", 42, n);
}

int main(void)
{
	test_chain(0);
	test_chain(123456);
	test_chain(-123456);
	return (0);
}
