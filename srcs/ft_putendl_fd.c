/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:43:49 by znichola          #+#    #+#             */
/*   Updated: 2022/08/23 09:43:49 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!*s || fd < 0)
		return;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
