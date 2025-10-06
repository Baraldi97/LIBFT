NAME = ft_printf

SRCS = ft_printf.c \
       ft_aux_func.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

# Regra para criar o executável
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


# Regra para compilar os arquivos .c em .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


# Regra para limpar os arquivos gerados (arquivos objeto e executável)
clean:
	rm -f $(OBJS)


# Regra para limpar tudo (arquivos objeto, executável e outros)
fclean: clean
	rm -f $(NAME)


# Regra para recompilar tudo (limpa e depois reconstrói)
re: fclean all


.PHONY: all clean fclean re