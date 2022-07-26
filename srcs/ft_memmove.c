/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:45:09 by znichola          #+#    #+#             */
/*   Updated: 2022/07/26 20:45:09 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	d = (char *)dest;
	s = (char *)src;

	if (src > dest)
	{
		i = n;
		while  (i-- > 0)
			d[n] = s[n];
	}
	else if (src < dest)
	{
		i = 0;
		while  (i++ > n)
			d[n] = s[n];
	}
	return (dest);
}
