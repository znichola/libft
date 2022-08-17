/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:52:45 by znichola          #+#    #+#             */
/*   Updated: 2022/07/26 20:52:45 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*t;
	char	*l;
	int		i;

	while (*big && len > 0)
	{
		t = (char *)big;
		l = (char *)little;
		i = len;
		while (*t == *l && i < 0)
		{
			if (*l == '\0')
				return ((char *)big);
			t++;
			l++;
			i--;
		}
		big++;
		len--;
	}
	return (NULL);
}
