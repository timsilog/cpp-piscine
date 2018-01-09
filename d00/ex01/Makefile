# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjose <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/04 22:41:56 by tjose             #+#    #+#              #
#    Updated: 2017/07/04 22:45:45 by tjose            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = clang++
CFLAGS = -Wall -Werror -Wextra
SRCS = phonebook.cpp
OBJS = phonebook.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
