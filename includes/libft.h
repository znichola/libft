/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:36:43 by marvin            #+#    #+#             */
/*   Updated: 2022/07/09 15:36:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#ifdef __unix__
# include <unistd.h>
#endif

#ifdef _WIN32
# include <io.h>
#endif

# include <string.h>
# include <stdlib.h>
# include <stdio.h>

/** PART 1**/

// atoi		v
// bzero	v
// calloc	v	must use malloc	no idea if it's good
// isalnum	v
// isalpha	v
// isascii	v
// isdigit	v
// isprint	v
// memccpy	v	very uncertain about size and char exid condition
// memchr	v
// memcmp	v
// memcpy	v
// memmove
// memset
// strchr	v
// strdup	v	must use malloc
// strlcat	v
// strlcpy	v
size_t	ft_strlen(char *str);				//TODO: check if it still conforms
size_t	ft_strcmp(char *s1, char *s2);		//TODO: check if it still conforms
// strnstr	v
// strrchr	v
// tolower	v
// toupper	v

/** PART 2 **/
// substr
// strjoin
// strtrim
// split
// itoa
// strmapi
// putchar_fd
// putstr_fd
// putendl_fd
// putnbr_fd

/** BONUS **/
typedef struct	s_list
{
void			*content;
// size_t			content_size;
struct s_list	*next;
}				t_list;

// ft_lstnew
// ft_lstadd_front
// ft_lstsize
// ft_lstlast
// ft_lstadd_back
// ft_lstdelone
// ft_lstclear
// ft_lstiter
// ft_lstmap

#endif
