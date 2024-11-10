# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 18:02:56 by anel-men          #+#    #+#              #
#    Updated: 2024/11/02 17:55:26 by anel-men         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

BONUS_SRCS = $(wildcard *.c)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

NAME = libft.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $@ $^

bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $^


clean:
	rm -f $(OBJS)


fclean: clean
	rm -f $(NAME)

re: fclean all
