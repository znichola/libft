/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:41:50 by znichola          #+#    #+#             */
/*   Updated: 2022/10/10 11:35:11 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(long n)
{
	int	count;

	count = 1;
	if (n < 0)
		n = -n;
	n /= 10;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*ft_rec_itoa(long n, char *s)
{
	if (n < 0)
	{
		n = -n;
		*s++ = '-';
	}
	if (n > 9)
		s = ft_rec_itoa(n / 10, s);
	*s = n % 10 + '0';
	*(++s) = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*r;
	char	*ret;
	int		len;

	len = ft_count_digits(n);
	if (n < 0)
		len += 1;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	r = ret;
	(void)ft_rec_itoa(n, r);
	return (ret);
}
