# ============================================================================ #
#                                  MAKEFILE                                    #
#                          42 School - Málaga 2026                             #
# ============================================================================ #

# ============================================================================ #
#  VARIABLES                                                                   #
# ============================================================================ #

# Name of library
NAME	= libft.a

# Compilation and flags
CC 		= gcc
CFLAGS	= -Wall -Wextra -Werror -c -I includes

# Directories
SRCS	= srcs/ft_putchar.c\
		  srcs/ft_putstr.c\
		  srcs/ft_strcmp.c\
		  srcs/ft_strlen.c\
		  srcs/ft_swap.c\

# source and object files
OBJS	= $(SRCS:.c=.o)

# Tools
RM	= rm -f
AR	= ar -rc

# Default rule
all: $(NAME)

# Implicit rule to compiling .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

# Package library
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	echo -e "\033[32m✓ Empaquetado completo: $(NAME)\033[0m"

# Clean object files
clean:
	$(RM) $(OBJS)
	echo -e "\033[33m✓ Archivos objeto (.o) eliminados\033[0m"

# Clean all
fclean: clean
	$(RM) $(NAME)
	echo -e "\033[33m✓ Compilación eliminada completamente\033[0m"

# Recompile everything
re: fclean all

 # Phony targets (They are not real files)
.PHONY: all clean fclean re $(NAME)

# ============================================================================= #
