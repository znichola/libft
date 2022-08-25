# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 09:03:40 by znichola          #+#    #+#              #
#    Updated: 2022/07/09 16:23:47 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# the name of the NAME program
NAME	= libft.a

# other source files and the associated object files (this can be blank)
# atoi bzero calloc isalnum isalpha isascii isdigit isprint memcmp memchr memcpy memccpy memmove memset strchr strrchr strdup strlcat strlcpy strlen strncmp strnstr tolower toupper substr strjoin strtrim split itoa strmapi putchar_fd putstr_fd putendl_fd putnbr_fd lstnew lstadd_front lstsize lstlast lstadd_back lstdelone lstclear lstiter lstmap

PART_1	=	atoi         bzero        calloc       isalnum      isalpha      \
			isascii      isdigit      isprint      memcmp       memchr       \
			memcpy       memccpy      memmove      memset       strchr       \
			strrchr      strdup       strlcat      strlcpy      strlen       \
			strncmp      strnstr      tolower      toupper
PART_2	=	substr       strjoin      strtrim      split        itoa         \
			strmapi      putchar_fd   putstr_fd    putendl_fd   putnbr_fd
BONUS	=	lstnew       lstadd_front lstsize      lstlast      lstadd_back  \
			lstdelone    lstclear     lstiter      lstmap

SRCS	= srcs/
# SRC			+=	$(addsuffix .c, $(addprefix srcs/ft_, $(PART_1)))
SRC		+=	$(addsuffix .c, $(addprefix $(SRCS)ft_, $(PART_1)))
SRC		+=	$(addsuffix .c, $(addprefix $(SRCS)ft_, $(PART_2)))
OBJ		=	$(SRC:.c=.o)

SRCB	=	$(addsuffix .c, $(addprefix $(SRCS)ft_, $(BONUS)))
OBJB	=	$(SRCB:.c=.o)

# special include directories
INCLUDE = includes/
# INCLUDE = .

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

# bonus: $(OBJS_B)
# 	$(AR) $(NAME) $^

bonus : $(OBJ) $(OBJB)
		${LIB} ${NAME} $(OBJ) ${OBJB}

# Add a rule called 'so' in your Makefile to compile your libft in dynamic library instead of static
so:
	$(CC) -fPIC $(CFLAGS) -c $(SRC) $(SRCB) -I ${INCLUDE}
	gcc -shared -o libft.so $(OBJ) $(OBJB) -I ${INCLUDE}

# remove binaries
clean :
		${RM} $(OBJ)
		${RM} $(OBJB)

# # remove binaries and other junk
fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY: $(NAME) all re clean fclean bonus
