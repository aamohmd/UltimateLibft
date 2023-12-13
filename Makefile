CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_strchr.c ft_strdup.c ft_strjoin.c\
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c\
		ft_tolower.c ft_toupper.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_bzero.c\
		ft_memset.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memcpy.c\
		ft_memmove.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(BONUS_OBJS) $(OBJS)

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(BONUS_SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(BONUS_OBJS)