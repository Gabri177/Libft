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


CFILE = $(wildcard ./FuncionesBasic/*.c)
OFILE = $(patsubst ./FuncionesBasic/%.c, ./FuncionesBasic/%.o, $(CFILE))
HFILE = ./FuncionesBasic/
FLAG = -Wall -Wextra -Werror
NAME = ./libft.a

all : $(NAME)
$(NAME) : $(OFILE)
	ar rc $@ $^
%.o : %.c
	gcc -c $(FLAG) $< -I $(HFILE) -o $@
fclean : clean
	rm -rf $(NAME)
re : fclean all
.PHONY : clean
clean :
	rm -rf $(OFILE)
	
