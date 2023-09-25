# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 12:23:36 by dbrundl           #+#    #+#              #
#    Updated: 2023/09/25 17:10:14 by dbrundl          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	ft_print_hex.c ft_print_pointer.c ft_printf.c ft_write.c

LIBFT_PATH	=	./Libft
LIBFT		=	$(LIBFT_PATH)/libft.a
$(LIBFT):
				make -C $(LIBFT_PATH)

$(NAME): 		$(OBJS)
				cp $(LIBFT) $(NAME)
				ar rcs $(NAME) $(OBJECTS)

OBJS 		= 	$(SRCS:.c=.o)

CC 			= 	cc
RM 			= 	rm -f
CFLAGS		= 	-Wall -Werror -Wextra

NAME 		= 	libftprintf.a

all:			$(LIBFT) $(NAME)

clean:			
				make clean -C $(LIBFT_PATH)
				$(RM) $(OBJS)

fclean:			clean
				make fclean -C $(LIBFT_PATH)
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re libft
