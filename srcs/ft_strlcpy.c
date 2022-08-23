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
	size_t	slen;

	slen = ft_strlen(src);
	if (size > 0)
	{
		if (slen + 1 < size)
			while (*src)
				*dest++ = *src++;
		else if (size != 0)
			while (--size > 0)
				*dest++ = *src++;
		*dest = '\0';
	}
	return (slen);
}
