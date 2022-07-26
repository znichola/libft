{
	char	*ret;
	char	*r;

	ret = (char *)malloc(sizeof(ret) * ( ft_strlen(s) + 1));
	if(!ret)
		return (NULL);
	r = ret;
	while (s)
	{
		r = s;
		r++;
		s++;
	}
	r = '\0';
	return (ret);
}

char	*ft_strdupe(const char *s)
{
	char	*ret;

	ret = (char *)malloc(sizeof(ret) * ( ft_strlen(s) + 1));
	if(!ret)
		return (NULL);
	return (ft_strcpy(ret, s));
}

char	*ft_strcpy(char *restrict dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strncpy(char *restrict dest, const char *restrict src, size_t n)
{
	int i;
	
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strcat(char *restrict dest, const char *restrict src)
{
	char	*ret;
	
	ret = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		drc++;
	}
	*dest = '\0';
	return (ret)
}

char	*ft_strncat(char *restrict dest, const char *restrict src, size_t n)
{
	int		i;
	char	*ret;
	
	ret = dest;
	while (*dest)
		dest++;
	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (ret);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*td;

	td = dest;
	if (size < len(dest))
		return (len(src) + size);
	while (*dest != '\0')
	{
		dest++;
		size--;
	}
	while (*src != '\0' && size > 1)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	while (*src != '\0' )
	{
		src++;
		dest++;
	}
	// return ((unsigned int)(dest - td));
	return (ft_strlen(dest) + ft_strlen(src));
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	char	*ret;
	
	ret = dest;
	while (*src && size > 1)
	{
		*dest = *src;
		src++;
		dest++;
		size--;
	}
	if (size > 0)
		*dest = '\0';
	return ft_strlen(src);
}

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*t;
	char	*l;
	int		i;
	
	while (*big && len > 0)
	{
		t = big;
		l = little;
		i = len;
		while (*t == *l && i < 0)
		{
			if (*l == '\0')
				return (big);
			t++;
			l++;
			i--;
		}
		big++;
		len--;
	}
	return (NULL);
}

char *ft_strrchar(const char *s, int c)
{
	char	*t;
	
	t = s;
	while (*s)
		s++;
	while (s != t)
	{
		if (*s == c)
			return (s);
		s--;
	}
	return (NULL);
}

char *ft_strrchr(const char *s, int c)
{
	char	*t;
	
	*t == NULL;
	while (*s)
	{
		if (*s == c)
			t = s;
		s++;
	}
	if (*s == c)
			t = s;
	return (t);
}

char *ft_strchr(const char *s, int c)
{
	char	*t;
	
	*t == NULL;
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (t);
}

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z'))
		return (c + 32);
	return (c);
}

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
};

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}

void *memccpy(void *s1, const void *s2, int c, size_t n)
{
	char *ret;

	while (*s2 != c && n > 0)
	{
		*s1 = *s2;
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
	{
		*s1 = *s2;
		*ret = *(s1 + 1);
	}
	else
		*ret = NULL;
	return (ret)
}

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

void	bzero(void *s, size_t n)
{
	while (n > 0)
	{
		*s = '\0';
		s++;
		n--;
	}
}

void *ft_memchr(const void *s, int c, size_t n)
{
	char	*ret;

	*ret = NULL;
	while (n > 0)
	{
		if (*s == c)
			return (s)
		s++;
		n--;
	}
	return (ret);
}

void *ft_memrchr(const void *s, int c, size_t n)
{
	char	*ret;
	
	*ret = NULL;
	n--;
	while (n >= 0)
	{
		if (s[n] == c)
			return (&s[n]);
		n--;
	}
	return (ret);
}

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void *ret;
	
	ret = malloc(elsize * nelem);
	if (!ret || elsize <= 0 || nelem <= 0)
		return (NULL);
	while (nelem > 0)
	{
		nelem--;
		ret[nelem] = '\0';
	}
	return (ret);
}


int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n <= 0)
		return (0);
	while (n > 0 && *s1 == *s2 && *s1)
	{
		s1++;
		s2++;
		n--;
	}
	return (s1 - s2);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*p_dest;
	char	*p_src;
	size_t	i;
	
	p_dest = (char *)dest;
	p_src = (char *)src;
	i = 0;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p_dest;
	char	*p_src;
	int		i;

	p_dest = (char *)dest;
	p_src = (char *)src;

	if (p_src > p_dest)
	{
		i = n;
		while  (i-- > 0)
			p_dest[n] = p_src[n];
	}
	else if (p_src < p_dest)
	{
		i = 0;
		while  (i++ > n)
			p_dest[n] = p_src[n];
	}
	return (dest);
}

void	*ft_memset(void *s, int c, size_t n)
{
	int *p_s;

	p_s = s;
	while (n > 0)
	{
		p_s = c;
		p_s++;
		n--;
	}
	return (s);
}