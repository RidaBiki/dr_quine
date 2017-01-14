# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbikitar <rbikitar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/04/21 17:36:21 by rbikitar          #+#    #+#              #
#    Updated: 2016/12/23 17:50:41 by rbikitar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sully

SRC = Sully.c

CC = gcc -Wall -Werror -Wextra

all: $(NAME)

$(NAME): 
	@ $(CC) $(SRC) -o $(NAME)

clean:
	@rm -f $(SRC:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean
