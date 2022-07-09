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
// memset
// bzero
// memcpy
// memccpy
// memmove
// memchr
// memcmp
int		ft_strlen(char *str);				//TODO: check if it still conforms
// strdup
// strcpy
// strncpy
// strcat
// strncat
// strlcat
// strchr
// strrchr
// strstr
// strnstr
int		ft_strcmp(char *s1, char *s2);		//TODO: check if it still conforms
// strncmp
// atoi
// isalpha
// isdigit
// isalnum
// isascii
// isprint
// toupper
// tolower

/** PART 2 **/
// memalloc
// memdel
// strnew
// strdel
// strcler
// striter
// striteri
// strmap
// strmapi
// strequ
// strnequ
// strsub
// strjoin
// strtrim
// strsplit
// itoa
// putchar
// putstr
// putendl
// putnbr
void	ft_putchar(char c);				//TODO: check if it still conforms
void	ft_putstr(char *str);			//TODO: check if it sitll conforms
// putendl_fd
// putnbr_fd

/** BONUS **/
typedef struct	s_list
{
void			*content;
size_t			content_size;
struct s_list	*next;
}				t_list;

// lstnew
// lstdelone
// lstdel
// lstadd
// lstiter
// lstmap

#endif