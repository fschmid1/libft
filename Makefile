NAME = libft.a
all:
	- @gcc -Wall -Wextra -Werror -c ft_*.c libft.h
	- @ar rc $(NAME) $? ft_*.o

clean:
	- rm -f ft_*.o

fclean:
	- clean
	- rm -f ${NAME} $(NAME:.c=.h).gch

re: fclean all

.PHONY: all clean fclean re