#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

/* =========================
   CORE CAPTURE
   ========================= */

char *capture_stdout_core(void (*f)(void *), void *arg)
{
	int pipefd[2];
	pid_t pid;
	char tmp[1024];
	int n;
	int len = 0;
	int cap = 1024;
	char *res = malloc(cap);

	pipe(pipefd);
	pid = fork();

	if (pid == 0)
	{
		close(pipefd[0]);
		dup2(pipefd[1], 1);
		dup2(pipefd[1], 2);
		close(pipefd[1]);

		f(arg);
		_exit(0);
	}

	close(pipefd[1]);
	waitpid(pid, NULL, 0);

	while ((n = read(pipefd[0], tmp, sizeof(tmp))) > 0)
	{
		if (len + n >= cap)
		{
			cap *= 2;
			res = realloc(res, cap);
		}
		memcpy(res + len, tmp, n);
		len += n;
	}

	res[len] = '\0';
	close(pipefd[0]);
	return res;
}

/* =========================
   WRAPPER STRUCTS
   ========================= */

typedef struct s_int
{
	void (*f)(int);
	int n;
} t_int;

typedef struct s_char
{
	void (*f)(char);
	char c;
} t_char;

typedef struct s_str
{
	void (*f)(char *);
	char *s;
} t_str;

/* =========================
   WRAPPERS
   ========================= */

void wrap_void(void *p)
{
	void (**f)(void) = p;
	f[0]();
}

void wrap_int(void *p)
{
	t_int *x = p;
	x->f(x->n);
}

void wrap_char(void *p)
{
	t_char *x = p;
	x->f(x->c);
}

void wrap_str(void *p)
{
	t_str *x = p;
	x->f(x->s);
}

/* =========================
   PUBLIC API
   ========================= */

char *capture_stdout(void (*f)(void))
{
	return capture_stdout_core((void (*)(void *))wrap_void, &f);
}

char *capture_stdout_int(void (*f)(int), int n)
{
	t_int x = {f, n};
	return capture_stdout_core(wrap_int, &x);
}

char *capture_stdout_char(void (*f)(char), char c)
{
	t_char x = {f, c};
	return capture_stdout_core(wrap_char, &x);
}

char *capture_stdout_str(void (*f)(char *), char *s)
{
	t_str x = {f, s};
	return capture_stdout_core(wrap_str, &x);
}
