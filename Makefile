NAME = libft.a
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -rf

SRCS = ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memset.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strrchr.c \
	  ft_strnstr.c \
	  ft_strncmp.c \
	  ft_strdup.c \
	  ft_calloc.c \
	  ft_memmove.c \
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putnbr_fd.c \
	  ft_substr.c \
	  ft_strmapi.c \
	  ft_putendl_fd.c \
	  ft_strjoin.c \
	  ft_itoa.c \
	  ft_striteri.c \
	  ft_split.c \
	  ft_strtrim.c \




OBJS = $(SRCS:.c=.o)



all: $(NAME)



$(NAME): $(OBJS) libft.h
	ar -rs $(NAME) $^
%.o: %.c  
	cc $(FLAGS) -c $< -o $@ 


clean:
	$(REMOVE) $(OBJS) $(OBJSB)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all