/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:56:00 by znichola          #+#    #+#             */
/*   Updated: 2022/07/26 19:56:00 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	char	*ret;

	*ret = NULL;
	while (n > 0)
	{
		if (*p == c)
			return (s);
		p++;
		n--;
	}
	return (ret);
}
