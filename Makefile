CFLAGS = -Wall -Werror -Wextra -std=c99
SRC = ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	  ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
	  ft_memcmp.c ft_strnstr.c

OBJ = $(SRC:.c=.o)
NAME = libft.a

all: ${NAME}

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

%.o: %.cc
	cc -c $< -o $@ ${CFLAGS}

clean :
	rm -f ${OBJ}
	rm -f ${NAME}

fclean : clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re