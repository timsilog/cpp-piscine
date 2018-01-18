NAME = convert
CC = clang++
CFLAGS = -Wall -Werror -Wextra
SRCS = main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all