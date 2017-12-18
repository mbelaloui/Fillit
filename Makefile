# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/16 19:53:08 by mbelalou          #+#    #+#              #
#    Updated: 2017/12/18 21:22:04 by mbelalou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fillit

FLAGES		=	-Wall -Wextra -Werror -fsanitize=address

SRCS_P_1	=	pass_1/ft_open_file.c\
				pass_1/ft_is_char_ok.c\
				pass_1/ft_check_char_file.c\
				pass_1/ft_is_file_good_len.c\
				pass_1/ft_file_to_tetri.c\
				pass_1/ft_extract_tetri.c\
				pass_1/ft_check_tetri.c\
				pass_1/ft_check_dim_tetri.c\
				pass_1/ft_check_nbr_hashtag.c\
				pass_1/ft_check_nbr_relations.c\
				pass_1/ft_near.c\
				pass_1/ft_is_u.c\
				pass_1/ft_is_d.c\
				pass_1/ft_is_l.c\
				pass_1/ft_is_r.c\
				pass_1/ft_newtetri.c\
				pass_1/ft_addtetri.c\
				pass_2/ft_backtracking_fillit.c\
				pass_2/ft_put_tetri_mat.c

SRCS		=	main.c

all			:	$(NAME)

$(NAME)		:	$(SRCS_P_1) $(SRCS)
			@gcc $(FLAGES) $(SRCS) $(SRCS_P_1) -o $(NAME) -L./Libft/ -lft
				@echo compilation complited successfully !

clean		:
			@rm -fr $(BIN)
				@echo cleaned all the .o

fclean		:	clean
			@rm -f $(NAME)
				@echo cleaned the $(NAME) file.
					@echo the directory is totaly cleaned

re			:	fclean all

.phony		:	all clean fclean re
