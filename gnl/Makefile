# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/19 18:09:15 by marvin            #+#    #+#              #
#    Updated: 2025/10/19 18:09:15 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# O nome do arquivo final que será gerado. Para este projeto,
# criaremos uma biblioteca estática (.a).
NAME = get_next_line.a

# O compilador que será usado. A norma da 42 exige o 'cc'.
CC = cc

# As flags de compilação. -Wall -Wextra -Werror são obrigatórias
# para garantir um código limpo e sem avisos.
CFLAGS = -Wall -Wextra -Werror

# O comando para criar a biblioteca estática (archive).
# 'ar' é o programa, 'rcs' são as flags para criar ou atualizar a biblioteca.
AR = ar rcs

# O comando para remover arquivos.
RM = rm -f

# Lista de todos os arquivos fonte (.c) do seu projeto.
# ATENÇÃO: Verifique se o nome 'get_next_line_utils.c' corresponde ao seu.
SRCS =	get_next_line.c \
		get_next_line_utils.c

# Gera automaticamente a lista de arquivos objeto (.o) a partir da lista de SRCS.
# Ex: get_next_line.c vira get_next_line.o
OBJS = $(SRCS:.c=.o)

# -------------------------------------------------------------------
# REGRAS
# -------------------------------------------------------------------

# A primeira regra é a padrão, 'all'. Ela depende da criação do arquivo $(NAME).
all: $(NAME)

# Regra para criar a biblioteca estática $(NAME).
# Ela depende de todos os arquivos objeto (.o) estarem compilados.
# Quando os .o estiverem prontos, esta regra os agrupa dentro da biblioteca.
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Regra genérica para compilar um arquivo .c em um .o.
# O '-c' diz ao compilador para apenas compilar, sem linkar.
# '$<' é uma variável automática do Make que se refere ao primeiro pré-requisito (o .c).
# '$@' é uma variável automática que se refere ao nome do alvo (o .o).
%.o: %.c get_next_line.h
	$(CC) $(CFLAGS) -c $< -o $@

# Regra 'clean': remove todos os arquivos objeto (.o) gerados.
clean:
	$(RM) $(OBJS)

# Regra 'fclean': executa a regra 'clean' e depois remove o arquivo final $(NAME).
fclean: clean
	$(RM) $(NAME)

# Regra 're': executa 'fclean' (limpeza total) e depois 'all' (recompila tudo).
# Útil para garantir uma compilação do zero.
re: fclean all

# Declara as regras que não geram arquivos com o mesmo nome,
# para evitar conflitos e garantir que sempre executem.
.PHONY: all clean fclean re