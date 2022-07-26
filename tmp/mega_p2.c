#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;

	ret = (char *)malloc(sizeof(*ret) * (len + 1));
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

	ret = (char *)malloc(sizeof(*ret) * (ft_strlen(s1) + ft_strlen(s2) + 1));
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
	*r = '\0';
	return (ret);
}

static int	ft_isin(char *s, char c)
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
	while (ft_isin(set, *start))
		start++;
	while (ft_isin(set, *end));
		end--;
	if (start == end)
		return (NULL);
	ret = (char *)malloc(sizeof(*ret) * (end - start + 1));
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

static char	*ft_nextword(char const **s, char const c)
{
	char	*ret;
	char	*t;

	while (**s != c)
		*s++;
	t = *s;
	while(*t != c)
		t++;
	ret = (char *)malloc(sizeof(*ret) * (t - *s + 1));
	t = ret;
	while(**s != c)
	{
		*t = **s;
		*s++;
		t++;
	}
	t = '\0';
	return (ret);
}

static int	ft_countwords(char const *s, char const c)
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
	char	**ret;
	int		i;
	int		word_count;

	word_count = ft_countwords(s, c);
	ret = (char **)malloc(sizeof(char*) * (word_count + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		ret[i] = ft_nextword(&s, c);
		i++;
	}
	ret[i] = NULL;
	return (ret);
}

static char	*rec_itoa_old(int n, char *s)
{
	if (n < 10)
	{
		*s = n + '0';
		s++;
		*s = '\0';
	}
	else
	{
		s = rec_itoa(n / 10, s);
		*s = (n % 10) + '\0';
		s++;
		*s = '\0';
	}
	return (s);
}

static char	*rec_itoa(long n, char *s)
{
	if (n < 0)
	{
		n *= -1;
		*s = '-';
		s++;
	}
	if (n > 9)
		s = rec_itoa(n / 10, s);
	*s =  n % 10 + '\0';
	s++;
	*s = '0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	len = 1;
	while (n / len * 10 == 0)
		len++;
	if (n < 0)
		len++;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	return (rec_itoa(n, s));
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		i;

	ret = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	while(*s)
		write(fd, s++, 1);
}

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

void	ft_putnbr_fd_withfree(int n, int fd)
{
	char	*ret;

	ret = ft_atoi(n);
	ft_putstr_fd(ret, fd);
	free(ret);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else
	{
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}