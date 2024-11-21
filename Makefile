# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 00:48:59 by lobriott          #+#    #+#              #
#    Updated: 2024/11/11 01:39:38 by loubriottet      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

HEADER = ./libft.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard *.c)

BONUSSRC = ./ft_lstadd_back_bonus.c ./ft_lstadd_front_bonus.c ./ft_lstclear_bonus.c \
	./ft_lstdelone_bonus.c ./ft_lstiter_bonus.c ./ft_lstlast_bonus.c \
	./ft_lstnew_bonus.c ./ft_lstsize_bonus.c

NORMALSRC = $(filter-out %_bonus.c, $(SRC))

OBJSNORMAL = $(NORMALSRC:.c=.o)

OBJSBONUS = $(BONUSSRC:.c=.o)

OBJSBONUS =$(BONUSSRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJSNORMAL)
	ar rcs $(NAME) $(OBJSNORMAL)

bonus: $(OBJSBONUS)
	ar rcs $(NAME) $(OBJSBONUS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJSNORMAL) $(OBJSBONUS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY = all clean fclean re bonus
