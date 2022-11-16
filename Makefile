NAME = libft.a

MAKEFLAGS += --no-builtin-rules
MAKEFLAGS += --no-builtin-variables

VPATH = src

# Compiler Variables
CC		= cc
CFLAGSS	= -Wall -Wextra -Werror -g
INCFLAG	= -I include -I printf
AR		= ar
ARFLAGS = -rcs

FILES = ft_isalpha.c \
		ft_toupper.c \
		ft_isdigit.c \
		ft_tolower.c \
		ft_isalnum.c \
		ft_strchr.c \
		ft_isascii.c \
		ft_strrchr.c \
		ft_isprint.c \
		ft_strncmp.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memchr.c \
		ft_memcpy.c \
		ft_memcmp.c \
		ft_memmove.c \
		ft_strnstr.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_ltoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		get_next_line.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_printf.c \
		ft_flags.c \
		ft_printf_util.c



SRC		= $(addprefix src/, $(FILES))
OBJ		= $(addprefix _bin/,$(notdir $(SRC:.c=.o)))

$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $@ $^

_bin :
	mkdir _bin

_bin/%.o : %.c _bin
	@$(CC) -c $(CFLAGSS) $(INCFLAG) $< -o $@

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)
re:		fclean all

all:	$(NAME)

.PHONY: clean fclean re all run
