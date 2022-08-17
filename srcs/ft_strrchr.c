/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:47:23 by znichola          #+#    #+#             */
/*   Updated: 2022/07/26 20:47:23 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;

	t == NULL;
	while (*s)
	{
		if (*s == c)
			t = (char *)s;
		s++;
	}
	if (*s == c)
			t = (char *)s;
	return (t);
}
