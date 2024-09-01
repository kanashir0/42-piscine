# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 15:03:53 by btonetti          #+#    #+#              #
#    Updated: 2024/09/01 12:43:46 by gyasuhir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# FUNCTIONS = is_number.c validade_input.c
# @gcc -Wall -Wextra -Werror -o $(NAME) $(FUNCTIONS) $(MAIN)
NAME = rush-02
MAIN = monofile.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(MAIN)
	$(CC) $(CFLAGS) -o $(NAME) $(MAIN)


run: $(NAME)
	./${NAME}


clean:
	rm -f $(NAME)
