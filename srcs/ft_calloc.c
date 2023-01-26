/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:51:28 by znichola          #+#    #+#             */
/*   Updated: 2023/01/23 22:45:24 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	ret = (void *)ft_x_malloc(nmemb * size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, nmemb * size);
	return (ret);
}

void	*ft_x_malloc(size_t size)
{
	void	*ret;

	ret = (void *)malloc(size);
	if (!ret)
	{
		write(2, &"failed to allocate more memory, quitting.", 2);
		exit(2);
	}
	return (ret);
}
