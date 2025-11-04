NAME = libft.a
SRC = ft_atoi.c ft_isprint.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c ft_bzero.c ft_itoa.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c ft_calloc.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c ft_isalnum.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c ft_isalpha.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c ft_isascii.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c ft_isdigit.c ft_memset.c ft_strdup.c ft_strncmp.c
OBJ = $(SRC:.c=.o)
SRCB = ft_lstadd_back_bonus.c   ft_lstdelone_bonus.c  ft_lstmap_bonus.c/
ft_lstadd_front_bonus.c  ft_lstiter_bonus.c    ft_lstnew_bonus.c/
ft_lstclear_bonus.c      ft_lstlas_bonus.c     ft_lstsize_bonus.c/
OBJB = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: 	$(OBJB)
	ar rcs bonus $(OBJB)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: all bonus clean fclean re

