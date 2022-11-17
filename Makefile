# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: znichola <znichola@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 09:03:40 by znichola          #+#    #+#              #
#    Updated: 2022/11/17 13:54:22 by znichola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# the name of the NAME program
NAME	=	libft.a

PART_1	=	isalnum      lstmap       putstr_fd    strrchr      isalpha      \
			itoa         memcmp       strjoin      lstadd_back  lstclear     \
			memset       strlen       atoi         lstdelone    lstnew       \
			split        strtrim      isascii      lstsize      memcpy       \
			strlcat      lstadd_front memmove      putchar_fd   strmapi      \
			bzero        lstiter      putendl_fd   strchr       substr       \
			isdigit      memccpy      strdup       strlcpy      strncmp      \
			calloc       lstlast      putnbr_fd    strnstr      tolower      \
			isprint      memchr       striteri     toupper



SRC_DIR	= srcs
OBJ_DIR	= objs

SRCS	=	$(addsuffix .c, $(addprefix $(SRC_DIR)/ft_, $(PART_1)))

# special include directories
INCLUDE = .

# select the compiler and flags
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
LIB		=	ar rs
RM		=	rm -f

# submodules
# printf
PRT_N	=	libftprintf.a
PRT_DIR	=	printf
PRINTF	=	$(PRT_DIR)/$(PRT_N)

# get next line
GNL_DIR	=	get_next_line
GNL		=	get_next_line get_next_line_utils
SRCS	+=	$(addsuffix .c, $(addprefix $(GNL_DIR)/, $(GNL)))

# creat obj list
OBJS	=	$(SRCS:.c=.o)

# specify how to compile the .c files
.c.o :
		$(CC) $(CFLAGS) -I${INCLUDE} -c $< -o $(@)

# if you type 'make' without arguments, this is the default
all : $(NAME)

# specify how to compile the NAME
$(NAME): $(PRINTF) $(OBJS)
		${LIB} ${@} ${OBJS}

# remove binaries
clean :
		${RM} $(OBJS)
		$(MAKE) -C $(PRT_DIR) clean

# remove binaries and other junk
fclean : clean
		${RM} ${NAME}
		$(MAKE) -C $(PRT_DIR) fclean

re : fclean all

# submodules
$(PRINTF):
		$(MAKE) -C $(PRT_DIR) $(PRT_N)
		cp $(PRINTF) $(NAME)

.PHONY: $(NAME) all re clean fclean bonus
