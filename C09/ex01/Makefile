# ============================================================================ #
#                                  MAKEFILE                                    #
#                          42 School - Málaga 2026                             #
# ============================================================================ #

# ============================================================================ #
#  VARIABLES                                                                   #
# ============================================================================ #

# Nombre de la libreria
NAME	= libft.a

# Compilador y flags
CC 		= gcc
CFLAGS	= -Wall -Wextra -Werror -c -I includes

# Directorios
SRCS	= srcs/ft_putchar.c\
		  srcs/ft_putstr.c\
		  srcs/ft_strcmp.c\
		  srcs/ft_strlen.c\
		  srcs/ft_swap.c\

# Archivos fuente y objetos
OBJS	= $(SRCS:.c=.o)

# Regla implícita para compilar archivos .c a .o
%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

# Herramientass
RM	= rm -f
AR	= ar -rc

# Regla por defecto
all: $(NAME)

# Empaquetar libreria
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	echo -e "\033[32m✓ Empaquetado completo: $(NAME)\033[0m"

# Limpiar archivos objeto
clean:
	$(RM) $(OBJS)
	echo -e "\033[33m✓ Archivos objeto (.o) eliminados\033[0m"

# Limpiar todo
fclean: clean
	$(RM) $(NAME)
	echo -e "\033[33m✓ Compilación eliminada completamente\033[0m"

# Recompilar todo
re: fclean all

 # Phony targets (no son archivos reales)
.PHONY: all clean fclean re $(NAME)

# ============================================================================= #
