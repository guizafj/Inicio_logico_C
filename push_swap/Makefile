# ============================================================================ #
#                                  MAKEFILE                                    #
#                          42 School - Málaga 2026                             #
# ============================================================================ #

# ============================================================================ #
#  VARIABLES                                                                   #
# ============================================================================ #

# Name of library
NAME		= push_swap

LIB_DIR = Libft

STATIC_LIB = $(LIB_DIR)/libft.a

MAKE 		= make

SRCS	=  utils_structs.c\
			clean_leaks.c\
			extract_and_validate_flags.c\
			extract_numbers.c\
			ft_split_set.c\
			join_args.c\
			main.c\
			orchestrating_operator.c\
			order_level.c\
			validate_input.c

OBJS		= $(SRCS:.c=.o)

# Compilation and flags
CC		= cc
CFLAGS		= -I $(LIB_DIR) -Wall -Wextra -Werror

RM		= rm -f

# Default rule
all: $(NAME)

# Implicit rule to compiling .c files into .o files
%.o: %.c push_swap.h
	$(CC) $(CFLAGS)  -c $< -o $@

$(STATIC_LIB):
	$(MAKE) -C $(LIB_DIR)

# Package library
$(NAME): $(STATIC_LIB) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(STATIC_LIB) -o $(NAME)

# Clean object files
clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIB_DIR) clean

# Clean all
fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIB_DIR) fclean

# Recompile everything
re: fclean all

 # Phony targets (They are not real files)
.PHONY: all clean fclean re

# =============================================================================#
