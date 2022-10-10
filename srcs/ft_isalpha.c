/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:42:48 by znichola          #+#    #+#             */
/*   Updated: 2022/07/26 19:42:48 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_isalpha(int c)
{
	return (((unsigned)c >= 'A' && (unsigned)c <= 'Z')
		|| ((unsigned)c >= 'a' && (unsigned)c <= 'z'));
}
	// return (isalpha(c));
