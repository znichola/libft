/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:49:02 by znichola          #+#    #+#             */
/*   Updated: 2022/10/10 11:35:11 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dest, const char *src, size_t size)
// {
// 	if (size < ft_strlen(dest))
// 		return (ft_strlen(src) + size);
// 	while (*dest != '\0')
// 	{
// 		dest++;
// 		size--;
// 	}
// 	while (*src != '\0' && size > 1)
// 	{
// 		*dest = *src;
// 		dest++;
// 		src++;
// 		size--;
// 	}
// 	*dest = '\0';
// 	while (*src != '\0' )
// 	{
// 		src++;
// 		dest++;
// 	}
// 	return (ft_strlen(dest) + ft_strlen(src));
// }

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*td;

	td = dest;
	if (size < ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (*dest)
	{
		dest++;
		size--;
	}
	while (*src && size-- > 1)
		*dest++ = *src++;
	*dest = '\0';
	while (*src++)
		dest++;
	return (dest - td);
}
