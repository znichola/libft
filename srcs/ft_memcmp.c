/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:55:10 by znichola          #+#    #+#             */
/*   Updated: 2022/07/26 19:55:10 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*p1;
	char	*p2;

	p1 = (char *)s1;
	p2 = (char *)s2;
	if (n <= 0)
		return (0);
	while (n > 0 && *p1 == *p2 && *p1)
	{
		p1++;
		p2++;
		n--;
	}
	return (p1 - p2);
}
