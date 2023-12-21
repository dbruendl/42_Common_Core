GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

CC = cc
CFLAGS 	= -Wall -Werror -Wextra
LBX 	= -Lminilibx -lmlx -lX11 -lXext 
NAME 	= fractol

SRCS	=	\
				./main.c \
				./init.c \
				./math_utils.c \
				./events.c \
				./render.c \
				./string_utils.c \

OBJS	= ${SRCS:.c=.o}

${NAME}	:	$(OBJS)
			@echo "$(GREEN)Compiling fractol..."
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LBX)
			@echo "Fractol ready."


all: $(NAME)

clean:
	rm -rf $(OBJS)
	@echo "$(NAME): $(RED)$(OBJS) was deleted$(RESET)"
	@echo "$(NAME): $(RED)object files were deleted$(RESET)"


fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

re: fclean all

.PHONY: all clean fclean re