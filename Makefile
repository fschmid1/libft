NAME = libft.a
all:
	- @gcc -Wall -Wextra -Werror -c ft_*.c libft.h
	- @ar rc $(NAME) $? ft_*.o libft.h

clean:
	- rm -f ft_*.o

fclean: clean
	- rm -f ${NAME} $(NAME:.a=.h.gch)

re: fclean all

.PHONY: all clean fclean re