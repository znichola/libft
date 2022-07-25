char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;

	ret = (char *)malloc(sizeof(ret) * (len + 1));
	if (!ret)
		return (NULL);
	s += start;
	i = 0;
	while (i < len)
	{
		ret[i] = s[i];
		i++;
	}
	return (ret);
}

// what if one or both are size 0 strings?
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	char	*r;
	
	ret = (char *)malloc(sizeof(ret) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ret)
		return (NULL);
	r = ret;
	while (s1)
	{
		*r = *s1;
		r++;
		s1++;
	}
	while (s2)
	{
		*r = *s2;
		r++;
		s2++;
	}
	*r = ''
	return (ret);
}

int	ft_isin(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

// something something count first trim characters then count from the end?
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	char	*r;
	char	*start;
	char	*end;
	
	start = s1;
	end = s1 + 1 - ft_strlen(s1);
	while (ft_isin(*start))
		start++;
	while (ft_isin(*end));
		end--;
	if (start == end)
		return (NULL);
	ret = (ret *)malloc(sizeof(ret) * (end - start + 1));
	if (!ret)
		return (NULL);
	r = ret;
	while (start != end)
	{
		*r = *start;
		r++;
		start++;
	}
	*start = '\0';
	return (ret);
}

char	*ft_nextword(char const *s, const char *sep)
{
	
}

int	ft_countwords(char const *s, char const c)
{
	int		count;
	char	*t;
	
	count = 1;
	if (!*s)
		return (0);
	while (*s)
	{
		t = ft_strstr(s, c);
		if (!t)
			return (count);
		if (t != s)
		{
			count++;
			s = t;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	
}

char static	*rec_itoa(int n, char *s)
{
	
}

char	*ft_itoa(int n)
{
	int	i;
	int	s;
	
	s = 1;
	if (n < 0)
	{
		s = -1;
		n *= -1;
	}
	i = 1;
	while (n / i * 10 == 0)
		i++;
	
}