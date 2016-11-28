# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Mkefile                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelharim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 16:55:21 by aelharim          #+#    #+#              #
#    Updated: 2016/11/07 13:43:56 by aelharim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PSRC = ./srcs/
HDR = ./includes/
FLAG = -Wall -Werror -Wextra
OPTION = -c -I $(HDR)
SRC = $(PSRC)ft_putchar.c $(PSRC)ft_putstr.c $(PSRC)ft_strcmp.c $(PSRC)ft_strlen.c $(PSRC)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
