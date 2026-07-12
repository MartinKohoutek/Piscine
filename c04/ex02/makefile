NAME = test

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = \
	ft_putnbr.c \
	../tests/assert.c \
	test.c \
	../tests/capture.c

INCLUDE = -I../include

all:
	$(CC) $(CFLAGS) $(INCLUDE) $(SRC) -o $(NAME)

test: all
	./$(NAME)

clean:
	rm -f $(NAME)
