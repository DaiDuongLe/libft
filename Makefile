NAME=libft.a

all : $(NAME)

CC := cc
CFLAGS := -Wall -Werror -Wextra

$(NAME) : $(OBJ)

clean :
	/bin/rm -rf $(OBJ)
fclean : clean
	/bin/rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
