#include "libft.h"

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
		src++;
	}
	*dest = '\0';
	return (ret);
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
	if (c >= 'A' && c <= 'Z')
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
	size_t	i;
	char	*p1;
	char	*p2;

	i = 0;
	p1 = (char *)s1;
	p2 = (char *)s2;
	while (p2[i] != c && i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	if (n > 0)
	{
		p1[i] = p2[i];
		return (p1[i + 1]);
	}
	return (NULL);
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
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}
}

void *ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	char	*ret;

	*ret = NULL;
	while (n > 0)
	{
		if (*p == c)
			return (s);
		p++;
		n--;
	}
	return (ret);
}

void *ft_memrchr(const void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	n--;
	while (n >= 0)
	{
		if (p[n] == c)
			return (&p[n]);
		n--;
	}
	return (NULL);
}

void	*ft_calloc(size_t nelem, size_t elsize)
{
	char	*ret;

	ret = (char *)malloc(elsize * nelem);
	if (!ret || elsize <= 0 || nelem <= 0)
		return (NULL);
	while (nelem > 0)
	{
		nelem--;
		ret[nelem] = '\0';
	}
	return (ret);
}


int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*p1;
	char	*p2;

	p1 = (char *)s1;
	p2 = (char *)s2;
	if (n <= 0)
		return (0);
	while (n > 0 && *p1 == *p2 && *p1)
	{
		p1++;
		p2++;
		n--;
	}
	return (p1 - p2);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	char	*ret;

	d = (char *)dest;
	s = (char *)src;
	ret = d;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	d = (char *)dest;
	s = (char *)src;

	if (src > dest)
	{
		i = n;
		while  (i-- > 0)
			d[n] = s[n];
	}
	else if (src < dest)
	{
		i = 0;
		while  (i++ > n)
			d[n] = s[n];
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