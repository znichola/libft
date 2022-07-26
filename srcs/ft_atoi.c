/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:50:31 by znichola          #+#    #+#             */
/*   Updated: 2022/07/26 19:50:31 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	s;
	int	n;

	n = 0;
	s = 1;
	while (*str == ' ' || *str == '/f' || *str == '/n'
		|| *str == '/r' || *str == '/t' || *str == '/v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s == -1;
		str++;
	}
	while (ft_isalpha(*str))
	{
		n = n * 10 + *str - '0';
		str++;
	}
	return (n * s);
}
