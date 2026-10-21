# ============================================================================ #
#                                  MAKEFILE                                    #
#                          42 School - Málaga 2026                             #
# ============================================================================ #

# ============================================================================ #
#  VARIABLES                                                                   #
# ============================================================================ #

# Name of library
NAME		= push_swap
NAME_BONUS	= checker

LIB_DIR = Libft

STATIC_LIB = $(LIB_DIR)/libft.a

MAKE 		= make

SRCS	=  clean_leaks.c\
			config_manager.c\
			dispatcher.c\
			dispatcher_aux.c\
			extract_numbers.c\
			ft_split_set.c\
			init_to_order.c\
			join_args.c\
			main.c\
			operations_bridge.c\
			orchestating_operator.c\
			order_level.c\
			stack_aux.c\
			stack_operations.c\
			utils_structs.c\
			validate_input.c\
			strategy_implement.c\
			ft_complex.c\
			chunks_sort.c

SRCS_BONUS	= checker_bonus.c

OBJS		= $(SRCS:.c=.o)

# Compilation and flags
CC		= cc
CFLAGS		= -I $(LIB_DIR) -Wall -Wextra -Werror

RM		= rm -f

# Default rule
all: $(NAME)

bonus: $(NAME_BONUS)

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
	$(RM) $(NAME) $(NAME_BONUS)
	$(MAKE) -C $(LIB_DIR) fclean

# Recompile everything
re: fclean all

 # Phony targets (They are not real files)
.PHONY: all clean fclean re

# =============================================================================#
