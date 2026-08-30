# ============================================================================ #
#                                  MAKEFILE                                    #
#                          42 School - Málaga 2026                             #
# ============================================================================ #

# ============================================================================ #
#  VARIABLES                                                                   #
# ============================================================================ #

# Nombre de la libreria
NAME	= ft_display_file

# Compilador y flags
CC 		= gcc
CFLAGS	= -Wall -Wextra -Werror 

# Directorios
SRCS	= ft_display_file.c

# Archivos fuente y objetos
OBJS	= $(SRCS:.c=.o)

# Herramientass
RM	= rm -f

# Regla por defecto
all: $(NAME)

# Crear ejecutable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "Compilación exitosa: $(NAME)"

# Regla implícita para compilar archivos .c a .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar archivos objeto
clean:
	$(RM) $(OBJS)
	@echo "Archivos objeto (.o) eliminados"

# Limpiar todo
fclean: clean
	$(RM) $(NAME)
	@echo "Compilación eliminada completamente"

# Recompilar todo
re: fclean all

 # Phony targets (no son archivos reales)
.PHONY: all clean fclean re

# ============================================================================= #
