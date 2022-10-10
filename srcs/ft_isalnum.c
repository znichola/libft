/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:42:53 by znichola          #+#    #+#             */
/*   Updated: 2022/10/10 11:35:20 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

	// if ((ft_isalpha(c) || ft_isdigit(c)) == 0)
	// 	return 0;
	// return 1;
/* gcc srcs/ft_isalnum.c srcs/ft_isalpha.c srcs/ft_isdigit.c -I includes */

// #include <ctype.h>
// void main(void)
// {
// 	// int i = -1;
	// while (i < 530)
	// {
	// 	if (!!ft_isalnum(i) != !!isalnum(i))
	// 	{
	// 		printf("failed at val <%d> char <%c> : lib<%d> ft<%d>\n",
	// 					(short)i, i, isalnum(i), ft_isalnum(i));
	// 	}
	// 	i++;
	// }
//#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
// enum
// {
//   _ISupper = _ISbit (0),        /* UPPERCASE.  */
//   _ISlower = _ISbit (1),        /* lowercase.  */
//   // ...
//   _ISalnum = _ISbit (11)        /* Alphanumeric.  */
// };
// ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)

/*      ctype-info.c.
          localeinfo.h.

     ,   , (. `uselocale'  <locale.h>)
        ,  .
    ,   -,
    ,    ,   .

        384 ,
     `unsigned char' [0,255];   EOF (-1);
    `signed char' value [-128,-1).  ISO C ,   ctype
      `unsigned char'  EOF;
    `signed char'      .
          `int`,
     `unsigned char`,   `tolower(EOF)'   EOF,
       `unsigned char`.     - ,
         .  */
// extern const unsigned short int **__ctype_b_loc (void)
//      __THROW __attribute__ ((__const__));
// extern const __int32_t **__ctype_tolower_loc (void)
//      __THROW __attribute__ ((__const__));
// extern const __int32_t **__ctype_toupper_loc (void)
//      __THROW __attribute__ ((__const__));

// 	int i;
// 0x30-0x39, 0x41-0x5A and 0x61-0x7A.
//   30-57      65-90         97-122
// 	i = -1;
// 	while (i < 530)
// 	{
// 		if (!!ft_isalnum(i) != !!((*__ctype_b_loc ())[(int) ((i))] &
				// (unsigned short int) _ISalnum))
// 			printf("failed at val <%d> char <%c> : lib<%d> ft<%d>\n",
// 			(short)i, i, isalnum(i), ft_isalnum(i));
// 		i++;
// 	}
// 	printf("done\n");
// }