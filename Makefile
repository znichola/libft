# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: znichola <znichola@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 09:03:40 by znichola          #+#    #+#              #
#    Updated: 2022/10/10 14:17:57 by znichola         ###   ########.fr        #
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

SRCS	= srcs/

SRC		+=	$(addsuffix .c, $(addprefix $(SRCS)ft_, $(PART_1)))
SRC		+=	$(addsuffix .c, $(addprefix $(SRCS)ft_, $(PART_2)))
OBJ		=	$(SRC:.c=.o)

SRCB	=	$(addsuffix .c, $(addprefix $(SRCS)ft_, $(BONUS)))
OBJB	=	$(SRCB:.c=.o)

# special include directories
INCLUDE = .

# select the compiler and flags
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIB		= ar rcs
RM		= rm -f

# specify how to compile the .c files
.c.o :
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I ${INCLUDE}

# if you type 'make' without arguments, this is the default
all : $(NAME)

# specify how to compile the NAME
$(NAME): $(OBJ)
		${LIB} ${NAME} ${OBJ}

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
