#include "test.h"

static void		*two_dimensional_free(char ***res, int cur)
{
	int		i;

	i = 0;
	while (i < cur)
	{
		free((*res)[i]);
		(*res)[i] = NULL;
		i++;
	}
	free(*res);
	*res = NULL;
	return (NULL);
}

static int		word_count(char const *s, char c)
{
	int		cnt;

	cnt = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			cnt++;
			while (*s && *s != c)
				s++;
		}
	}
	return (cnt);
}

static int		word_length(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
	{
		i++;
	}
	return (i);
}

static char		**insert_word(char const *s, char c, int wc, char **res)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	while (i < wc)
	{
		while (*s == c)
			s++;
		len = word_length(s, c);
		if (!(res[i] = (char*)malloc(sizeof(char) * (len + 1))))
			return (two_dimensional_free(&res, i));
		j = 0;
		while (j < len)
		{
			res[i][j++] = *s++;
		}
		res[i][j] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}

char			**split(char const *s, char c)
{
	char	**res;
	int		wc;

	wc = word_count(s, c);
	if (!(res = (char **)malloc(sizeof(char *) * (wc + 1))))
		return (NULL);
	res = insert_word(s, c, wc, res);
	return (res);
}

char			strmapi_f(unsigned int i, char c)
{
	c ^= 32;
	return (c);
}
