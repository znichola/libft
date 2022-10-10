# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: znichola <znichola@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 09:03:40 by znichola          #+#    #+#              #
#    Updated: 2022/10/10 17:29:40 by znichola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# the name of the NAME program
NAME	= libft.a

PART_1	=	atoi         bzero        calloc       isalnum      isalpha      \
			isascii      isdigit      isprint      memcmp       memchr       \
			memcpy       memccpy      memmove      memset       strchr       \
			strrchr      strdup       strlcat      strlcpy      strlen       \
			strncmp      strnstr      tolower      toupper
PART_2	=	substr       striteri     strjoin      strtrim      split        \
			itoa         strmapi      putchar_fd   putstr_fd    putendl_fd   \
			putnbr_fd
BONUS	=	lstnew       lstadd_front lstsize      lstlast      lstadd_back  \
			lstdelone    lstclear     lstiter      lstmap

SRC		+=	$(addsuffix .c, $(addprefix ft_, $(PART_1)))
SRC		+=	$(addsuffix .c, $(addprefix ft_, $(PART_2)))
OBJ		=	$(SRC:.c=.o)

SRCB	=	$(addsuffix .c, $(addprefix ft_, $(BONUS)))
OBJB	=	$(SRCB:.c=.o)

# special include directories
INCLUDE = .

# select the compiler and flags
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIB		= ar rsv
RM		= rm -f

# specify how to compile the .c files
.c.o :
		$(CC) $(CFLAGS) -I${INCLUDE} -c $< -o $(@)

# if you type 'make' without arguments, this is the default
all : $(NAME)

# specify how to compile the NAME
$(NAME): $(OBJ)
		${LIB} ${@} ${OBJ}

# libft.a : $(NAME)

bonus : $(OBJ) $(OBJB)
		${LIB} ${NAME} $(OBJ) ${OBJB}

# remove binaries
clean :
		${RM} $(OBJ)
		${RM} $(OBJB)

# # remove binaries and other junk
fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY: $(NAME) all re clean fclean bonus
