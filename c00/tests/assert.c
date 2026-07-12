#include "../include/mini_test.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int g_pass = 0;
static int g_fail = 0;

/* =========================
   BASIC ASSERTS
   ========================= */

void assert_int(char *name, int expected, int actual)
{
	if (expected == actual)
	{
		g_pass++;
		printf(GREEN "[PASS] %s\n" RESET, name);
	}
	else
	{
		g_fail++;
		printf(RED "[FAIL] %s (expected %d, got %d)\n" RESET,
			   name, expected, actual);
	}
}

void assert_str(char *name, char *expected, char *actual)
{
	if ((expected == NULL && actual == NULL) ||
		(expected && actual && strcmp(expected, actual) == 0))
	{
		g_pass++;
		printf(GREEN "[PASS] %s\n" RESET, name);
	}
	else
	{
		g_fail++;
		printf(RED "[FAIL] %s\nexpected: %s\nactual:   %s\n" RESET,
			   name,
			   expected ? expected : "NULL",
			   actual ? actual : "NULL");
	}
}

/* =========================
   CORE ASSERT (UNIFIED)
   ========================= */

void assert_stdout_core(
	char *name,
	char *expected,
	char *actual)
{
	if (strcmp(actual, expected) == 0)
	{
		g_pass++;
		printf(GREEN "[PASS] %s\n" RESET, name);
	}
	else
	{
		g_fail++;
		printf(RED "[FAIL] %s\nexpected:\n%s\n\nactual:\n%s\n" RESET,
			   name, expected, actual);
	}
}

/* =========================
   STDOUT ASSERTS (WRAPPER STYLE)
   ========================= */

void assert_stdout(char *name, char *expected, void (*f)(void))
{
	char *out = capture_stdout(f);

	assert_stdout_core(name, expected, out);

	free(out);
}

void assert_stdout_char(char *name, char *expected,
						void (*f)(char), char c)
{
	char *out = capture_stdout_char(f, c);

	assert_stdout_core(name, expected, out);

	free(out);
}

void assert_stdout_str(char *name, char *expected,
					   void (*f)(char *), char *str)
{
	char *out = capture_stdout_str(f, str);

	assert_stdout_core(name, expected, out);

	free(out);
}

void assert_stdout_int(char *name, char *expected,
					   void (*f)(int), int n)
{
	char *out = capture_stdout_int(f, n);

	assert_stdout_core(name, expected, out);

	free(out);
}
