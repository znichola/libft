/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:56:54 by znichola          #+#    #+#             */
/*   Updated: 2022/07/26 19:56:54 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	char	*ret;

	d = (char *)dest;
	s = (char *)src;
	ret = d;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n++;
	}
	return (dest);
}
