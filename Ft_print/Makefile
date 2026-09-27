# ============================================================================ #
#                                  MAKEFILE                                    #
#                          42 School - Málaga 2026                             #
# ============================================================================ #

# ============================================================================ #
#  VARIABLES                                                                   #
# ============================================================================ #

# Name of library
NAME		= libftprintf.a\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_strlen.c\
				ft_itoa.c\
				ft_putnbr_fd.c

# Compilation and flags
CC		= cc
CFLAGS		= -Wall -Wextra -Werror

SRCS		= ft_printf.c \

OBJS		= $(SRCS:.c=.o)

RM		= rm -f
AR		= ar rcs

# Default rule
all: $(NAME)

# Implicit rule to compiling .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Package library
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Clean object files
clean:
	$(RM) $(OBJS)

# Clean all
fclean: clean
	$(RM) $(NAME)

# Recompile everything
re: fclean all

 # Phony targets (They are not real files)
.PHONY: all clean fclean re

# =============================================================================#
