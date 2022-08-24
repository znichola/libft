/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:42:48 by znichola          #+#    #+#             */
/*   Updated: 2022/07/26 19:42:48 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
int	ft_isalpha(int c)
{
	// return (isalpha(c));
	return (((unsigned)c >= 'A' && (unsigned)c <= 'Z') ||
		((unsigned)c >= 'a' && (unsigned)c <= 'z'));
}
