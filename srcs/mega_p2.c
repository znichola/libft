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
	return (ret);
}

// something something count first trim characters then count from the end?
char	*ft_strtrim(char const *s1, char const *set)
{

}
