# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 17:30:59 by ynaamane          #+#    #+#              #
#    Updated: 2018/11/08 13:01:41 by ynaamane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
PATH_SRC = ./srcs/
HEADER = ./includes/libft.h
FLAGS = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = 	$(PATH_SRC)ft_putchar.c \
		$(PATH_SRC)ft_putstr.c \
		$(PATH_SRC)ft_strcmp.c \
		$(PATH_SRC)ft_strlen.c \
		$(PATH_SRC)ft_swap.c \
		
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "\033[32mlibft is ready\033[0m"

clean:
	/bin/rm -f $(OBJ)
	@echo "\033[33mall .o files are removed\033[0m"

fclean: clean
	/bin/rm -f $(NAME)
	@echo "\033[31m$(NAME) is deleted\033[0m"

re: fclean all
