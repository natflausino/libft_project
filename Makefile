# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/12 20:08:01 by nbarreir          #+#    #+#              #
#    Updated: 2021/06/20 03:58:34 by nbarreir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
INCLUDES = libft.h

all: $(NAME)

$(NAME): $(INCLUDES)
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)

git:
	@git add .
	@git commit -m "$m"
	@git push

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
