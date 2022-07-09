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
SRC		= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJ		= $(SRC:.c=.o)

# special include directories
INCLUDE = includes/

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

# remove binaries
clean :
		${RM} $(OBJ)

# # remove binaries and other junk
fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY: all re clean fclean
