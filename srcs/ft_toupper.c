/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:32:06 by znichola          #+#    #+#             */
/*   Updated: 2022/10/10 11:35:11 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return ((unsigned char)c - 32);
	return (c);
}

// #include <ctype.h>
// void main(void)
// {
// 	int i;

// 	i = -100;
// 	while (i < 530)
// 	{
// 		if (ft_toupper(i) != toupper(i))
// 		{
// 			printf("failed at val <%d> char <%c> : lib<%d> ft<%d>\n",
// 				(short)i, i, toupper(i), ft_toupper(i));
// 		}
// 		i++;
// 	}
// }

// (__extension__ (
// {
// 	int __res;
// 	if (sizeof(i) > 1)
// 	{
// 		if (__builtin_constant_p(i))
// 		{
// 			int __c = (i);
// 	__res = __c < -128 || __c > 255 ? __c : (*__ctype_toupper_loc())[__c];
// 		}
// 		else
// 			__res = toupper(i);
// 	}
// 	else
// 		__res = (*__ctype_toupper_loc())[(int)(i)];
// 	__res;
// }))

// toupper(16);

// isalnum(16);

// isdigit(16);

// isalnum(16);

// ((*__ctype_b_loc ())[(int) ((16))] & (unsigned short int) _ISalnum);