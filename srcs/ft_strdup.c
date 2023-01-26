/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:48:02 by znichola          #+#    #+#             */
/*   Updated: 2023/01/23 22:43:49 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;
	size_t	len;

	len = ft_strlen(s) + 1;
	ret = (char *)ft_x_malloc(sizeof(char) * len);
	if (!ret)
		return (NULL);
	return ((char *)ft_memcpy(ret, s, len));
}
