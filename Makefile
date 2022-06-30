FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
	   ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c\
	   ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
	   ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
	   ft_atoi.c ft_calloc.c ft_strdup.c ft_memcpy.c\
	   ft_memmove.c ft_strlcpy.c ft_strlcat.c 

OBJS = $(FILES:.c=.o)

Cflags = -Wall -Wextra -Werror #Flags necesarias para compilar, habrá que ponerlas si no respeta el comp

NAME = libft.a

LIB = libft.h


##################################################

all: $(NAME)

$(NAME): $(OBJS) $(LIB)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
		
$(OBJS): $(FILES) $(LIB)
	gcc $(Cflags) -c $(FILES) 

clean:
	rm  -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

