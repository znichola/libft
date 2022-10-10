/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:41:09 by znichola          #+#    #+#             */
/*   Updated: 2022/08/23 09:41:09 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	ret = (char *)malloc(sizeof(char) * len);
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
	ret = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!ret)
		return (NULL);
	i = -1;
	while (++i < word_count)
		ret[i] = ft_nextword((char **)&s, c);
	ret[i] = NULL;
	return (ret);
}

// void main(int ac, char **av)
// {
// 	char *split = av[2];
// 	int count = ft_countwords(split, *av[1]);
// 	printf("word count is %d\n", count);
// 	// char *word = ft_nextword(&split, *av[1]);
// 	// printf("\nsplit<%s>\nword<%s>\n", split, word);
// 	char **s = ft_split(av[2], *av[1]);
// 	for (int i = 0; i < count; i++)
// 		printf("new str<%s>\n", s[i]);
// 	free(s);
// }