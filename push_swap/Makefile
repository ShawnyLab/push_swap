# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/24 18:22:24 by jinspark          #+#    #+#              #
#    Updated: 2021/05/24 18:22:25 by jinspark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C = checker

NAME_P = push_swap

LIB = ./libft/libft.a
LIB_FODER = ./libft/
FLAGS = -Wextra -Werror -Wall -g

SRCS_C = ./srcs/checker/
SRCS_P = ./srcs/push_swap/

SHARE_FOLDER = ./srcs/shared_functions/

FUNC_C = main_checker.c run_commands_input.c
FUNC_P = main_ps.c get_median.c solver.c a_functions.c b_functions.c 
SHARE_FUNCS = build.c run_commands.c parse_nb_from_str.c

SHARE_FILES = $(addprefix $(SHARE_FOLDER), $(SHARE_FUNCS))
FILES_C = $(addprefix $(SRCS_C), $(FUNC_C))
FILES_P = $(addprefix $(SRCS_P), $(FUNC_P))

CH_OBJ = $(FUNC_C:.c=.o) $(SHARE_FUNCS:.c=.o)
P_OBJ = $(FUNC_P:.c=.o) $(SHARE_FUNCS:.c=.o)

INCLUDES = -I ./libft/ft_printf/includes/ -I ./libft/libft/includes/ -I ./includes/

all: library $(NAME_C) $(NAME_P)

library:
	make -C $(LIB_FODER)

$(NAME_C): all
	gcc $(FLAGS) $(INCLUDES) -c $(FILES_C) $(SHARE_FILES)
	gcc $(FLAGS) -o $(NAME_C) $(INCLUDES) $(CH_OBJ) $(LIB)

$(NAME_P): all
	gcc $(FLAGS) $(INCLUDES) -c $(FILES_P)
	gcc $(FLAGS) -o $(NAME_P) $(INCLUDES) $(P_OBJ) $(LIB)

clean:
	rm -rf $(CH_OBJ) $(FUNC_P:.c=.o)
	make clean -C $(LIB_FODER)

fclean: clean
	rm -rf $(NAME_C) $(NAME_P)
	make fclean -C $(LIB_FODER)

re: fclean all

.PHONY: library clean fclean re all
