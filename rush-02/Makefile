# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 15:03:53 by btonetti          #+#    #+#              #
#    Updated: 2024/09/01 20:27:11 by gyasuhir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
MAIN = main.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

FUNCTIONS = io.c match.c process_number.c utils.c validation.c

all: $(NAME)

$(NAME): $(MAIN)
	$(CC) $(CFLAGS) ${FUNCTIONS} -o $(NAME) $(MAIN)


run: $(NAME)
	./${NAME}


fclean:
	rm -f $(NAME)
