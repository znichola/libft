/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:30:12 by znichola          #+#    #+#             */
/*   Updated: 2023/01/23 22:44:04 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	e;

	i = ft_strlen(s);
	if (start >= i)
		i = 0;
	else if (start + len > i)
		i = ft_strlen(s + start);
	else
		i = len;
	ret = (char *)ft_x_malloc(sizeof(char) * (i + 1));
	if (!ret)
		return (NULL);
	e = 0;
	while (e < i)
	{
		ret[e] = s[start + e];
		e++;
	}
	ret[e] = '\0';
	return (ret);
}
