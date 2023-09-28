# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 12:23:36 by dbrundl           #+#    #+#              #
#    Updated: 2023/09/28 09:53:16 by dbrundl          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libftprintf.a
LIBFT_PATH	=	./Libft
LIBFT		=	$(LIBFT_PATH)/libft.a
SRCS 		= 	ft_print_hex.c ft_print_pointer.c ft_printf.c ft_write.c
CC 			= 	cc
RM 			= 	rm -f
CFLAGS		= 	-Wall -Werror -Wextra
OBJS 		= 	$(SRCS:.c=.o)

$(LIBFT):
				make -C $(LIBFT_PATH)

$(NAME): 	$(OBJS)
				cp $(LIBFT) $(NAME)
				ar rcs $(NAME) $(OBJS)

all:			$(LIBFT) $(NAME)

clean:			
				make clean -C $(LIBFT_PATH)
				$(RM) $(OBJS)

fclean:			clean
				make fclean -C $(LIBFT_PATH)
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re Libft
