/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:51:28 by znichola          #+#    #+#             */
/*   Updated: 2022/07/26 19:51:28 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	char	*ret;

	ret = (char *)malloc(elsize * nelem);
	if (!ret || elsize <= 0 || nelem <= 0)
		return (NULL);
	while (nelem > 0)
	{
		nelem--;
		ret[nelem] = '\0';
	}
	return (ret);
}