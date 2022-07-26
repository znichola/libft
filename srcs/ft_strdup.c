/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:48:02 by znichola          #+#    #+#             */
/*   Updated: 2022/07/26 20:48:02 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;

	ret = (char *)malloc(sizeof(ret) * ( ft_strlen(s) + 1));
	if(!ret)
		return (NULL);
	return (ft_strcpy(ret, s));
}
