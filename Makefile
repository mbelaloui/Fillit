# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/11 18:13:04 by mbelalou          #+#    #+#              #
#    Updated: 2017/12/11 18:23:12 by mbelalou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	fillit

FLAGES	=	-Wall -Wextra -Werror

SRCS	=	check_nbr_relations.c\
			ft_addtetri.c\
			ft_addtetri_f.c\
			ft_check_char_file.c\
			ft_check_dim_tetrnim.c\
			ft_check_nbr_hashtag.c\
			ft_check_nbr_relations.c\
			ft_check_tetrim.c\
			ft_get_dim_mat.c\
			ft_get_x_y.c\
			ft_getetrim.c\
			ft_initetri.c\
			ft_is_char_ok.c\
			ft_is_d.c\
			ft_is_file_good_len.c\
			ft_is_good_len.c\
			ft_is_l.c\
			ft_is_r.c\
			ft_is_u.c\
			ft_low_l.c\
			ft_mid_l.c\
			ft_near.c\
			ft_newtetri.c\
			ft_open_file.c\
			ft_puttetri.c\
			ft_puttetrim.c\
			ft_upper_l.c\
			main_test.c\
			libft/*.c

BIN		=	$(SRCS:.c=.o)

all:$(NAME)

$(NAME):
	@gcc $(FLAGES) $(SRCS) -o $(NAME) -I.
	@echo compilation complited successfully !

clean:
	@rm -fr $(BIN)
	@echo cleaned all the .o

fclean:clean
	@rm -f $(NAME)
	@echo cleaned the $(NAME) file.
	@echo the directory is totaly cleaned

re:fclean all

.phony:all clean fclean re		
