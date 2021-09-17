NAME = push_swap
SRC = SRCS/main.c \
	  SRCS/utils1.c \
	  SRCS/param_handler.c \

LIBFT = -L./libft -lft
CC = gcc
CFLAGS = -Wall -Wextra -Werror #-g3 -fsanitize=address
RM = rm -rf
OBJ = $(SRC:.c=.o)
$(NAME): $(OBJ)
	@$(MAKE) -C ./libft
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)
all: $(NAME)
clean:
	@${RM} ${OBJ}
fclean: clean
	@$(MAKE) fclean -C ./libft
	@${RM} ${SAVE}
	@${RM} ${NAME}
re: fclean all
.PHONY: all clean fclean re
