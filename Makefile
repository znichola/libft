# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: znichola <znichola@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 09:03:40 by znichola          #+#    #+#              #
#    Updated: 2023/01/11 17:23:35 by znichola         ###   ########.fr        #
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

EXTRA	=	isspace                 itoa_base_unsigned                       \
			nbr_len                 putnbr_base_fd                           \
			realloc                 split2                                   \
			itoa_base               nbr_abs_len                              \
			nbr_len_unsigned        putnbr_base_unsigned_fd

SRC_DIR	= srcs
OBJ_DIR	= objs

SRCS	:=	$(addsuffix .c, $(addprefix $(SRC_DIR)/ft_, $(PART_1)))
SRCS	+=	$(addsuffix .c, $(addprefix extra/ft_, $(EXTRA)))
# SRCS	+= " "

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
$(NAME): do_printf $(OBJS)
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
do_printf:
		$(MAKE) -C $(PRT_DIR) $(PRT_N)
		cp $(PRINTF) $(NAME)

.PHONY: $(NAME) all re clean fclean bonus

# SUBMODULES tutorial
# to add the lib as a submodule use
# 	$ git submodule add git@github.com:znichola/libft.git libft
#
# this stages the added submodule, so do a commit and push the change
# 	$ git commit -m "libft addded as submodule to the project."
# 	$ git push
#
# the submoduel folders don't actually contain anything,update each with
# 	$ git submodule update --init <path_to module_folder>
# or recursivly pull all submodules
# 	$ git submodule update --init --recursive
#  TODO: finish this once I've figured out how it all works
