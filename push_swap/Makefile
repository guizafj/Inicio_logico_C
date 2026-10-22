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

MANDATORY = main.c
BONUS = checker_bonus.c

MAKE	= make

SRCS	=	join_args.c \
				stack_operations.c \
				orchestating_operator.c \
				validate_input.c \
				config_manager.c \
				extract_numbers.c \
				ft_split_set.c \
				utils_structs.c \
				chunks_sort.c \
				init_to_order.c \
				operations_bridge.c \
				order_level.c \
				strategy_implement.c \
				dispatcher_aux.c \
				operations_bonus.c \
				dispatcher.c \
				ft_complex.c \
				stack_aux.c \
				clean_leaks.c \
				orquestating_bonus.c


OBJS		= $(SRCS:.c=.o)
MANDATORY_OBJECT = $(MANDATORY:.c=.o)
BONUS_OBJECT = $(BONUS:.c=.o)



# Compilation and flags
CC			= cc
CFLAGS		= -I $(LIB_DIR) -Wall -Wextra -Werror

RM		= rm -f

# Default rule
all: $(NAME)

# Implicit rule to compiling .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS)  -c $< -o $@


$(STATIC_LIB):
	$(MAKE) -C $(LIB_DIR)

# Package library
$(NAME): $(STATIC_LIB) $(OBJS) $(MANDATORY_OBJECT)
	$(CC) $(CFLAGS) $(OBJS) $(MANDATORY_OBJECT) $(STATIC_LIB) -o $(NAME)

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(STATIC_LIB) $(OBJS) $(BONUS_OBJECT)
	$(CC) $(CFLAGS) $(OBJS) $(BONUS_OBJECT) $(STATIC_LIB) -o $(NAME_BONUS)

# Clean object files
clean:
	$(RM) $(OBJS) $(BONUS_OBJECT) $(MANDATORY_OBJECT)
	$(MAKE) -C $(LIB_DIR) clean

# Clean all
fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)
	$(MAKE) -C $(LIB_DIR) fclean

# Recompile everything
re: fclean all

 # Phony targets (They are not real files)
.PHONY: all clean fclean re bonus

# =============================================================================#
