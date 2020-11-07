#include "test.h"
#include "libft.h"

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

char			**_split(char const *s, char c)
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

t_list	*_lstnew(void *content)
{
	t_list	*new_element;

	if (!(new_element = malloc(sizeof(t_list))))
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}

int				_lstsize(t_list *lst)
{
	int	cnt;

	cnt = 0;
	while (lst)
	{
		cnt++;
		lst = lst->next;
	}
	return (cnt);
}

t_list	*_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void	_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_elem;

	if (new == NULL || lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_elem = _lstlast(*lst);
	last_elem->next = new;
}

void	_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	lst->content = NULL;
	lst->next = NULL;
	free(lst);
}

void	_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		_lstdelone(*lst, del);
		*lst = NULL;
		*lst = tmp;
	}
	*lst = NULL;
}
