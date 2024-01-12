# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 10:01:47 by yugao             #+#    #+#              #
#    Updated: 2024/01/12 06:38:30 by yugao            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILE = $(wildcard ./*.c)
OFILE = $(patsubst ./%.c, ./%.o, $(CFILE))
HFILE = ./
BONUS_FOLDER = ./_bonus
BONUS_CFILE = $(wildcard $(BONUS_FOLDER)/*.c)
BONUS_OFILE = $(patsubst $(BONUS_FOLDER)/%.c, $(BONUS_FOLDER)/%.o, $(BONUS_CFILE))
FLAG = -Wall -Wextra -Werror
NAME = libft.a

ifeq ($(MAKECMDGOALS), bonus)
	CFILE += $(BONUS_CFILE)
	OFILE += $(BONUS_OFILE)
endif

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
	rm -rf $(BONUS_FOLDER)/*.o
bonus : all
