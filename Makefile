NAME = push_swap
HEADER = push_swap.h
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = parsing.c push_swap_tools.c push_swap.c libf.c operations.c



all : $(NAME)

$(NAME): $(SRC) $(HEADER)
	${CC} $(CFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(SRC)

fclean : clean
	$(RM) $(NAME)

re: fclean all 

.PHONY: all clean fclean re