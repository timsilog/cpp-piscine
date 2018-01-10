NAME = replace
CC = clang++
CFLAGS = -Wall -Werror -Wextra
SRCS = main.cpp
OBJS = main.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
