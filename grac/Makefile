# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbikitar <rbikitar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/04/21 17:36:21 by rbikitar          #+#    #+#              #
#    Updated: 2016/12/23 15:20:24 by rbikitar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Grace_Kid

SRC = Grace.c

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
