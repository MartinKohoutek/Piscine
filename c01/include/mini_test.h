#ifndef MINI_TEST_H
#define MINI_TEST_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/wait.h>

/* =========================
   ASSERTS
   ========================= */

void assert_int(char *name, int expected, int actual);

void assert_str(char *name, char *expected, char *actual);

void assert_array_int(char *name, int *expected, int *actual, int size);

void assert_stdout_char(char *name, char *expected,
						void (*f)(char), char c);

void assert_stdout_str(char *name, char *expected,
					   void (*f)(char *), char *str);

void assert_stdout_int(char *name, char *expected,
					   void (*f)(int), int n);

void assert_stdout(char *name, char *expected,
				   void (*f)(void));

void assert_stdout_big(char *name, char *expected,
					   void (*f)(void));

/* =========================
   CAPTURE
   ========================= */

char *capture_stdout(void (*f)(void));

char *capture_stdout_char(void (*f)(char), char c);

char *capture_stdout_str(void (*f)(char *), char *str);

char *capture_stdout_int(void (*f)(int), int n);

/* =========================
   COLORS
   ========================= */

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define RESET "\033[0m"

#endif
