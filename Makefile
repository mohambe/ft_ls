# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msambo <msambo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/03 17:57:18 by msambo            #+#    #+#              #
#    Updated: 2020/01/16 08:55:15 by msambo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls
SRCS = main.c util.c dir.c reverse.c long.c util2.c timingOut.c util3.c util4.c
OBJECTS = $(SRCS: .c=.o)
LIBS = ./ft_libft/libft.a

all: $(NAME)

$(NAME): $(SRCS) $(LIBS)
	cc $(SRCS) $(LIBS) -o $(NAME)

clean:
	make -C ft_libft/ clean

fclean: clean
	make -C ft_libft/ fclean
	/bin/rm -f $(NAME)

re: fclean all

$(LIBS) :
	make -C ft_libft
