# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 10:01:47 by yugao             #+#    #+#              #
#    Updated: 2023/11/23 22:25:09 by yugao            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFILE = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
 		./srcs/ft_strlen.c ./srcs/ft_swap.c
OFILE = ./srcs/ft_putchar.o ./srcs/ft_putstr.o ./srcs/ft_strcmp.o \
		./srcs/ft_strlen.o ./srcs/ft_swap.o
HFILE = ./includes/
FLAG = -Wall -Wextra -Werror
NAME = ./libft.a

all : $(NAME)
$(NAME) : $(OFILE)
	ar rc $@ $(OFILE)
%.o : %.c
	cc -c $(FLAG) $< -I $(HFILE) -o $@
fclean : clean
	rm -rf $(NAME)
re : fclean all
.PHONY : clean
clean :
	rm -rf $(OFILE)
	
