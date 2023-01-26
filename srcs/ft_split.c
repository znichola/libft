/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:41:09 by znichola          #+#    #+#             */
/*   Updated: 2023/01/23 22:43:45 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freeme(char **s, int i)
{
	while (i >= 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
}

static char	*ft_nextword(char **str, char const c)
{
	char	*ret;
	char	*end;
	size_t	len;

	while (**str == c && **str != '\0')
		(*str)++;
	end = (char *)*str;
	while (*end != c && *end != '\0')
		end++;
	len = end - *str + 1;
	ret = (char *)ft_x_malloc(sizeof(char) * len);
	if (!ret)
		return (NULL);
	end = ret;
	while (len-- > 1)
		*end++ = *(*str)++;
	*end = '\0';
	return (ret);
}

static int	ft_countwords(char const *s, char const c)
{
	int		count;
	int		flag;
	int		old_flag;

	flag = -1;
	count = 0;
	while (*s)
	{
		old_flag = flag;
		if (*s == c)
			flag = 0;
		else
			flag = 1;
		if (old_flag != flag && flag == 1)
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		i;
	int		word_count;

	word_count = ft_countwords(s, c);
	ret = (char **)ft_x_malloc(sizeof(char *) * (word_count + 1));
	if (!ret)
		return (NULL);
	i = -1;
	while (++i < word_count)
	{
		ret[i] = ft_nextword((char **)&s, c);
		if (ret[i] == NULL)
		{
			ft_freeme(ret, i);
			return (NULL);
		}
	}
	ret[i] = NULL;
	return (ret);
}
