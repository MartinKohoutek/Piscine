#include "../include/mini_test.h"

/* ===== TESTS ===== */

void test_sample(void)
{
	write(1, "hello", 5);
}

int main(void)
{
	printf("\n===== MINI TEST RUNNER =====\n\n");

	/* INT */
	assert_int("1 == 1", 1, 1);

	/* STR */
	assert_str("abc == abc", "abc", "abc");

	/* STDOUT */
	char *out = capture_stdout(test_sample);
	for (int i = 0; i < (int)strlen(out); i++)
		printf("%d ", out[i]);
	printf("\n");
	assert_str("stdout hello", "hello", out);
	free(out);

	printf("\n===== DONE =====\n");
	return 0;
}
