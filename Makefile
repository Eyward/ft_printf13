# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 16:35:38 by zzirh             #+#    #+#              #
#    Updated: 2022/01/05 20:29:19 by zzirh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FLAGS = -Wall -Wextra -Werror

AR = ar crs

RM = rm -rf

FILES =		ft_printf\
			ft_putch\
			ft_putst\
			ft_putindec\
			ft_putuin\
			ft_puthex\
			ft_printadd

SRC = $(FILES:=.c)

OBJ = $(FILES:=.o)

NAME = libftprintf.a

.PHONY:all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)

re : fclean all

