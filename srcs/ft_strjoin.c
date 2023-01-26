/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:39:29 by znichola          #+#    #+#             */
/*   Updated: 2023/01/23 22:48:24 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	char	*r;

	ret = (char *)ft_x_malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ret)
		return (NULL);
	r = ret;
	while (*s1)
		*r++ = *s1++;
	while (*s2)
		*r++ = *s2++;
	*r = '\0';
	return (ret);
}
