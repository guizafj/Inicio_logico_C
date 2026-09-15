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
CC 		= cc
CFLAGS	= -Wall -Wextra -Werror -c -I includes

# Directories
SRCS	= src/ft_atoi.c\
		  srcs/ft_bzero.\
		  srcs/ft_isalnum.c\
		  srcs/ft_isalpha.c\
		  srcs/ft_isascii.c\
		  srcs/ft_isdigit.c\
		  srcs/ft_isprint.c\
		  srcs/ft_memchr.c\
		  srcs/ft_memcmp.c\
		  srcs/ft_memmove.c\
		  srcs/ft_memset.c\
		  srcs/ft_strchr.c\
		  srcs/ft_strlcat.c\
		  srcs/ft_strlcpy.c\
		  srcs/ft_strlen.c\
		  srcs/ft_strncmp.c\
		  srcs/ft_strnstr.c\
		  srcs/ft_strrchr.c\
		  srcs/ft_tolower.c\
		  srcs/ft_toupper.c\

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
