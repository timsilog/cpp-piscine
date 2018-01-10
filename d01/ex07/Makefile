# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjose <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/09 22:49:30 by tjose             #+#    #+#              #
#    Updated: 2018/01/09 22:49:31 by tjose            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
