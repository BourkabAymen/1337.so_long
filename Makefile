# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 13:36:03 by abourkab          #+#    #+#              #
#    Updated: 2022/11/30 22:21:30 by abourkab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC = utils1.c utils2.c utils3.c utils4.c utils5.c so_long.c \
	  utils1_help/cal_colec.c \
	  utils1_help/find_pi.c \
	  utils1_help/find_pj.c \
	  utils1_help/ft_strlen.c \
	  utils1_help/get_content.c \
	  utils1_help/split.c \
	  utils2_help/find_character.c \
	  utils2_help/test_1_2_3_4.c \
	  utils2_help/indexh.c \
	  utils2_help/indexv.c \
	  utils2_help/test_recursive_vp.c \
	  utils2_help/characters_map.c \
	  utils3_help/test_map_put_photo.c \
	  utils4_help/change_indice.c \
	  utils4_help/exit_1.c \
	  utils4_help/ft_put_char_nbr.c \
	  utils4_help/mov_U_D_L_R.c \
	  utils4_help/test_U_D_L_R.c \
	  

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -lmlx -framework OpenGl -framework AppKit $(SRC) -o $(NAME)

execute:
	./$(NAME) maps/map1.ber

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
