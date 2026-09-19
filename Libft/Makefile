# ============================================================================ #
#                                  MAKEFILE                                    #
#                          42 School - Málaga 2026                             #
# ============================================================================ #

# ============================================================================ #
#  VARIABLES                                                                   #
# ============================================================================ #

# Name of library
NAME		= libft.a

# Compilation and flags
CC		= cc
CFLAGS		= -Wall -Wextra -Werror
INCLUDE		= -I includes

SRC_DIR		= srcs

SRCS		= $(SRC_DIR)/ft_atoi.c \
          $(SRC_DIR)/ft_bzero.c \
          $(SRC_DIR)/ft_calloc.c \
          $(SRC_DIR)/ft_isalnum.c \
          $(SRC_DIR)/ft_isalpha.c \
          $(SRC_DIR)/ft_isascii.c \
          $(SRC_DIR)/ft_isdigit.c \
          $(SRC_DIR)/ft_isprint.c \
          $(SRC_DIR)/ft_itoa.c \
          $(SRC_DIR)/ft_memchr.c \
          $(SRC_DIR)/ft_memcmp.c \
          $(SRC_DIR)/ft_memcpy.c \
          $(SRC_DIR)/ft_memmove.c \
          $(SRC_DIR)/ft_memset.c \
          $(SRC_DIR)/ft_putchar_fd.c \
          $(SRC_DIR)/ft_putendl_fd.c \
          $(SRC_DIR)/ft_putnbr_fd.c \
          $(SRC_DIR)/ft_putstr_fd.c \
          $(SRC_DIR)/ft_strchr.c \
          $(SRC_DIR)/ft_strdup.c \
          $(SRC_DIR)/ft_striteri.c \
          $(SRC_DIR)/ft_strjoin.c \
          $(SRC_DIR)/ft_strlcat.c \
          $(SRC_DIR)/ft_strlcpy.c \
          $(SRC_DIR)/ft_strlen.c \
          $(SRC_DIR)/ft_strmapi.c \
          $(SRC_DIR)/ft_strncmp.c \
          $(SRC_DIR)/ft_strnstr.c \
          $(SRC_DIR)/ft_strrchr.c \
          $(SRC_DIR)/ft_strtrim.c \
          $(SRC_DIR)/ft_substr.c \
          $(SRC_DIR)/ft_tolower.c \
          $(SRC_DIR)/ft_toupper.c \
          $(SRC_DIR)/ft_split.c \
          $(SRC_DIR)/ft_lstnew.c\
		  $(SRC_DIR)/ft_lstadd_front.c\
		  $(SRC_DIR)/ft_lstsize.c\
		  $(SRC_DIR)/ft_lstlast.c\
		  $(SRC_DIR)/ft_lstdelone.c\
		  $(SRC_DIR)/ft_lstclear.c\
		  $(SRC_DIR)/ft_lstiter.c\
		  $(SRC_DIR)/ft_lstmap.c

OBJS		= $(SRCS:.c=.o)

RM		= rm -f
AR		= ar rcs

# Default rule
all: $(NAME)

# Implicit rule to compiling .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

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

# ============================================================================= #
