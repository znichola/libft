/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:40:27 by znichola          #+#    #+#             */
/*   Updated: 2023/01/23 22:44:01 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isin(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	char	*r;
	char	*start;
	char	*end;

	start = (char *)s1;
	end = (char *)s1 + ft_strlen(s1) - 1;
	while (ft_isin((char *)set, *start))
		start++;
	while (ft_isin((char *)set, *end))
		end--;
	if (end - start + 1 <= 0)
		return (ft_calloc(1, 1));
	end++;
	ret = (char *)ft_x_malloc(sizeof(char) * (end - start + 1));
	if (!ret)
		return (NULL);
	r = ret;
	while (start < end)
		*r++ = *start++;
	*r = '\0';
	return (ret);
}
