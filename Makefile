# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbrundl <dbrundl@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 13:19:41 by dbrundl           #+#    #+#              #
#    Updated: 2023/09/07 17:55:22 by dbrundl          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c\
		ft_strnstr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c ft_putnbr_fd.c ft_striteri.c \

OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

all:	$(NAME)

$(NAME): 	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)
