# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtonizzo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 21:32:50 by vtonizzo          #+#    #+#              #
#    Updated: 2016/11/03 22:29:47 by vtonizzo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = gcc

CFLAG = -c -Wall -Werror -Wextra

SRC = display_file.c

OBJ = display_file.o

HDR = -I header.h

RM = rm -f

all: $(NAME)

$(NAME):
		@$(CC) $(CFLAG) $(SRC) $(HDR)
		@$(CC) $(OBJ) -o $(NAME)

clean:
		@$(RM) $(OBJ)

fclean: clean
		@$(RM) $(NAME)

re: fclean all
