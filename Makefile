# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhori <mhori@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/30 10:10:44 by mhori             #+#    #+#              #
#    Updated: 2020/12/14 00:36:54 by mhori            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL=/bin/bash

# ============================ COLOR =========================

RESET		= \033[0m
RED			= \033[0;31m
GREEN		= \033[0;32m
YELLOW		= \033[0;33m
BLUE		= \033[0;34m
MAGENT		= \033[0;35m
CYAAN		= \033[0;36m
WHITE		= \033[0;37m
B_RESET		= \033[0;49m
B_YELLOW	= \033[0;43m
B_CYAAN		= \033[0;46m
BOLD		= \033[1m
UNDER_LINE	= \033[0;4m

# ============================================================

NORM = norminette

# for compile

NAME = libft.a

AR	= ar
ARFLAGS	= rcs

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
# CLIBS	= -L . -lft

RM	= rm
RMFLAGS	= -rf

INC_DIR	= includes
SRC_DIR	= srcs
OBJ_DIR	= objs

HEADERS = $(addprefix $(INC_DIR)/,\
				ft_convert.h \
				ft_memmory.h \
				ft_get_next_line.h \
				ft_printf.h \
				ft_iswhat.h \
				ft_string.h \
				libft.h \
				ft_utf8.h \
				ft_lst.h \
)

# srcs

CONVERT_DIR = $(SRC_DIR)/convert
CONVERT_SRCS = $(addprefix $(CONVERT_DIR)/, \
                ft_atoi.c \
                ft_itoa.c \
                ft_tolower.c \
                ft_toupper.c \
)

# GNL_DIR = $(SRC_DIR)/get_next_line
# GNL_SRCS = $(addprefix $(GNL_DIR)/, \
# )

ISWHAT_DIR = $(SRC_DIR)/iswhat
ISWHAT_SRCS = $(addprefix $(ISWHAT_DIR)/, \
                ft_isalnum.c \
                ft_isascii.c \
                ft_isprint.c \
                ft_isalpha.c \
                ft_isdigit.c \
)

LST_DIR = $(SRC_DIR)/lst
LST_SRCS = $(addprefix $(LST_DIR)/, \
                ft_lstadd_back.c \
                ft_lstlast.c \
                ft_lstadd_front.c \
                ft_lstmap.c \
                ft_lstclear.c \
                ft_lstnew.c \
                ft_lstdelone.c \
                ft_lstsize.c \
                ft_lstiter.c \
)

# MATH_DIR = $(SRC_DIR)/math
# MATH_SRCS = $(addprefix $(MATH_DIR)/, \
# )

MEMMORY_DIR = $(SRC_DIR)/memmory
MEMMORY_SRCS = $(addprefix $(MEMMORY_DIR)/, \
                ft_bzero.c \
                ft_memccpy.c \
                ft_memcmp.c \
                ft_memmove.c \
                ft_calloc.c \
                ft_memchr.c \
                ft_memcpy.c \
                ft_memset.c \
)

# PRINTF_DIR = $(SRC_DIR)/printf
# PRINTF_SRCS = $(addprefix $(PRINTF_DIR)/, \
# )

# SORT_DIR = $(SRC_DIR)/sort
# SORT_SRCS = $(addprefix $(SORT_DIR)/, \
# )

STRING_DIR = $(SRC_DIR)/string
STRING_SRCS = $(addprefix $(STRING_DIR)/, \
                ft_putstr.c \
                ft_strjoin.c \
                ft_strmapi.c \
                ft_strtrim.c \
                ft_split.c \
                ft_strlcat.c \
                ft_strncmp.c \
                ft_substr.c \
                ft_strchr.c \
                ft_strlcpy.c \
                ft_strnstr.c \
                ft_strdup.c \
                ft_strlen.c \
                ft_strrchr.c \
)

# UTF8_DIR = $(SRC_DIR)/utf8
# UTF8_SRCS = $(addprefix $(UTF8_DIR)/, \
# )

WRITE_DIR = $(SRC_DIR)/write
WRITE_SRCS = $(addprefix $(WRITE_DIR)/, \
                ft_putchar_fd.c \
                ft_putendl_fd.c \
                ft_putnbr_fd.c \
                ft_putstr_fd.c \
)

SRCS = \
	$(LST_SRCS)		\
	$(MEMMORY_SRCS)	\
	$(STRING_SRCS)	\
	$(ISWHAT_SRCS)	\
	$(UTF8_SRCS)	\
	$(WRITE_SRCS)	\
	$(CONVERT_SRCS)	\
	$(PRINTF_SRCS)	\
	$(GNL_SRCS)		\
	$(MATH_SRCS)	\

OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.c=.o)))

# OBJS = $(SRCS:.c=.o)

SRCS = \
	$(LST_SRCS)		\
	$(MEMMORY_SRCS)	\
	$(STRING_SRCS)	\
	$(ISWHAT_SRCS)	\
	$(UTF8_SRCS)	\
	$(WRITE_SRCS)	\
	$(CONVERT_SRCS)	\
	$(PRINTF_SRCS)	\
	$(GNL_SRCS)		\
	$(MATH_SRCS)	\

# $(OBJDIR)/%.o : $(SRCDIR)/%.c
# 	@mkdir -p $(OBJDIR)
# 	@$(CC) $(CFLAGS) -c -o $@ $<

# ============================ Increment % ===================

T		=	$(words ${OBJS})
N		=	0
# words = 文字列の個数を数えます
# eval = 文字列を評価します
C		=	$(words $N)${eval N += 1}
PER	=	"[`expr $C  '*' 100 / $T`%]"

PRINT_PERCENT	= @printf "%-60b\r" "$(YELLOW)$(PER) Compiling  $(RESET)$(UNDER_LINE)"$@"$(RESET)"

# ============================================================

$(OBJ_DIR)/%.o : $(LST_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I include/libft.h -c $< -o $@
	$(PRINT_PERCENT)
$(OBJ_DIR)/%.o : $(MEMMORY_DIR)/%.c
	@$(CC) $(CFLAGS) -I include/libft.h -c $< -o $@
	$(PRINT_PERCENT)
$(OBJ_DIR)/%.o : $(STRING_DIR)/%.c
	@$(CC) $(CFLAGS) -I include/libft.h -c $< -o $@
	$(PRINT_PERCENT)
$(OBJ_DIR)/%.o : $(ISWHAT_DIR)/%.c
	@$(CC) $(CFLAGS) -I include/libft.h -c $< -o $@
	$(PRINT_PERCENT)
$(OBJ_DIR)/%.o : $(UTF8_DIR)/%.c
	@$(CC) $(CFLAGS) -I include/libft.h -c $< -o $@
	$(PRINT_PERCENT)
$(OBJ_DIR)/%.o : $(WRITE_DIR)/%.c
	@$(CC) $(CFLAGS) -I include/libft.h -c $< -o $@
	$(PRINT_PERCENT)
$(OBJ_DIR)/%.o : $(CONVERT_DIR)/%.c
	@$(CC) $(CFLAGS) -I include/libft.h -c $< -o $@
	$(PRINT_PERCENT)
$(OBJ_DIR)/%.o : $(PRINTF_DIR)/%.c
	@$(CC) $(CFLAGS) -I include/libft.h -c $< -o $@
	$(PRINT_PERCENT)
$(OBJ_DIR)/%.o : $(GNL_DIR)/%.c
	@$(CC) $(CFLAGS) -I include/libft.h -c $< -o $@
	$(PRINT_PERCENT)
$(OBJ_DIR)/%.o : $(MATH_DIR)/%.c
	@$(CC) $(CFLAGS) -I include/libft.h -c $< -o $@
	$(PRINT_PERCENT)

all : $(NAME)

clean :
	@rm -rf $(OBJ_DIR)

fclean : clean
	@$(RM) -rf $(NAME)

re : fclean all

$(NAME) : $(HEADERS) $(OBJS)
	@$(AR) $(ARFLAGS) $@ $(OBJS)
	@printf "\r                                                             \r$(GREEN)$(BOLD)created libft.a 🎉$(RESET)\n"

.PHONY: all clean fclean re norminette
