/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:50:08 by znichola          #+#    #+#             */
/*   Updated: 2022/07/26 20:50:08 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	char	*ret;

	ret = dest;
	while (*src && size > 1)
	{
		*dest = *src;
		src++;
		dest++;
		size--;
	}
	if (size > 0)
		*dest = '\0';
	return ft_strlen(src);
}
