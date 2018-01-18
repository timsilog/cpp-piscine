NAME = iter
CC = clang++
CFLAGS = -Wall -Werror -Wextra
SRCS = iter.cpp
OBJ = iter.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all