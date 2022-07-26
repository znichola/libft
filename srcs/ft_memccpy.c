/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:44:13 by znichola          #+#    #+#             */
/*   Updated: 2022/07/26 20:44:13 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t	i;
	char	*p1;
	char	*p2;

	i = 0;
	p1 = (char *)s1;
	p2 = (char *)s2;
	while (p2[i] != c && i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	if (n > 0)
	{
		p1[i] = p2[i];
		return (p1[i + 1]);
	}
	return (NULL);
}
