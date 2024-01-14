# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 10:01:47 by yugao             #+#    #+#              #
#    Updated: 2024/01/14 18:20:49 by yugao            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILE = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
		ft_tolower.c ft_toupper.c
OFILE = $(CFILE:%.c=%.o)
HFILE = ./
BONUS_FOLDER = ./_bonus
BONUS_CFILE = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
				ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
				ft_lstnew.c ft_lstsize.c
BONUS_OFILE = $(BONUS_CFILE:%.c=%.o)
FLAG = -Wall -Wextra -Werror
NAME = libft.a

all : $(NAME)
$(NAME) : $(OFILE)
	ar rc $@ $^
%.o : %.c
	gcc -c $(FLAG) $< -I $(HFILE) -o $@
fclean : clean
	rm -rf $(NAME)
re : fclean all
clean :
	rm -rf $(OFILE)
	rm -rf $(BONUS_OFILE)

bonus : $(BONUS_OFILE) $(OFILE)
	ar rcs $(NAME) $(BONUS_OFILE) $(OFILE)
#	$(MAKE) fclean
#	$(MAKE) all CFILE="$(CFILE) $(BONUS_CFILE)" OFILE="$(OFILE) $(BONUS_OFILE)"
.PHONY : fclean clean re bonus
