# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbaker <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/25 22:46:37 by kbaker            #+#    #+#              #
#    Updated: 2018/05/26 15:32:14 by lapang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC_PATH = ./src/
SRC_NAME = 	main.c \
			ft_get_pieces.c \
			ft_check_errors.c \
			ft_match_pieces.c \
		   	ft_match_invalid.c \
		   	ft_stock_pieces.c \
		   	ft_resolve.c \
		   	ft_do_resolve.c

OBJ_PATH = ./obj/
OBJ_NAME = $(SRC_NAME:.c=.o)

INC_PATH = ./include/

LIB = libft/libft.a

CC = gcc
CFLAGS = -g -Werror -Wall -Wextra

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
INC = $(addprefix -I,$(INC_PATH))

all: $(NAME)

$(LIB):
	@make -C libft

$(NAME): $(LIB) $(OBJ)
	$(CC) $(CFLAGS) $(INC) -o $(NAME) $(LIB) $(OBJ)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	rm -fv $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null
	@make -C libft clean

fclean: clean
	rm -fv $(NAME)
	@make -C libft fclean

re: fclean all

norme:
	norminette $(SRC)
	norminette $(INC_PATH)fillit.h

.PHONY: all clean fclean re norme
