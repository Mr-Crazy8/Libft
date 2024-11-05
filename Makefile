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
# this sets the compiler to gcc. whenever $(CC) appears later in Makefile,
# make will replace it with gcc.

CFLAGS = -Wall -Wextra -Werror
# these are compiler flags used to control how gcc compiles the code.
# -Wall: enables all standard warning messages, useful for catching common programming errors.
# -Wextra: adds extra warnings beyond -Wall for even more careful code checking.
# -Werror: treats all warnings as error, so the compilation stops if any warnings are detected.

SRCS = $(wildcard *.c)
# uses the wildcard function to find all files in the current directory with a .c extension. these files are stored in the variable src.

OBJS = $(SRCS:.c=.o)
# this converts each .c file in SRCS into a .o objects file.
# $(SRCS:.c=.o) replaces each .c extension in SRCS with .o Now, OBJS contains the list of all object files corresponding to the source files.

BONUS_SRCS = $(wildcard *.c)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

NAME = libft.a
#this sets NAME to libft.a, which will be the name of the static library that make will creat.
#the .a extension signigifies a static library in Unix-like systems.

all: $(NAME)
# all: this is the default target in Makefile, meaning that if you run make without specifying a target, make will try to build all.
# $(OBJS) $(NAME): Specifies that building all depends on both $(OBJS) (all the objects files) and $(NAME) (the static library). make will first ensure all object  files are up to date, and then create the library if it's not already there

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
# this is pattern rulr that tells make how to create .o (object) files form .c (source) files. the % symbol is a wildcard that matches any name, for example, foo.o will macth foo.c.
# $< : this is an automatic variable in make that represents the first prerequisite, in this case, the .c file.
# $@ : another automatic variable  representing the target file, which here is the .o file.
# $(CC) : expands to gcc, the compiler specified earlier.
# $(CFLAGS) : expands to -Wall -Wextra -Werror.
# -c:Tells gcc to compile the .c file into and object file wihout linking.
# $<: expands to the current .c file.
# -o $@: specifies the output file, whcih will be the corresponding .o file.
#  this rule ensures that each .c file is compiled into an object file with the same name but with a .o extension.

$(NAME): $(OBJS)
	ar rcs $@ $^
# $(NAME): this target specifies the rule for creating the static library libft.a.
# ar : this is the Unix archive command used to creat and maintain static libraries.
# rcs : these are flags for ar.
# r : replaces older object files in the archive with update ones.
# c : Creates the archive if it doesn't already exist.
# s : adds an index to the archive, making symbol lookup faster.
# $@: this represents the target file, which is $(NAME) (or libft.a)
# $(OBJS) : this is the list of objects files that will be added to libft.a.

bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $^


clean:
	rm -f $(OBJS)
# clean: this is "phony" target used for housekeeping; it doesn't produce a file. instead, it's a command for removing files.
# rm -f: deletes files without prompting and ignores errors if the files don't exist.
# $(OBJS): deletes all object files listed in $(OBJS).

fclean: clean
	rm -f $(NAME)
# fclean: this is another housekeeping target, but it performs a more thorough clean by ramoving the static library in addition to object files.
# $(NAME) : deletes libft.a if it exists.

re: fclean all
# re : this target is used to rebuild everythink form scratch.
# fclean all : runs fclean to delete all objects files and the library, then runs all to recompile everything and recreate the library.  
