/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:51:28 by znichola          #+#    #+#             */
/*   Updated: 2022/10/10 13:35:03 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;
	size_t	len;

	len = nmemb * size;
	if (nmemb > len)
		return (NULL);
	ret = (void *)malloc(len);
	if (!ret)
		return (NULL);
	ft_bzero(ret, len);
	return (ret);
}