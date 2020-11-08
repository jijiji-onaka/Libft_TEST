/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:47:56 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/07 17:55:44 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int			STRNSTR(char *a, char *b, size_t c)
{
	char *s = ft_strnstr(a, b, c);
	char *p = strnstr(a, b, c);
	int	f = 0;
	if (!s || !p)
	{
		if (s != p)
			f = 1;
	}
	else if (strcmp(s, p) != 0)
	{
		f = 1;
	}
	if (f == 1)
	{
		printf("argument[\"%s\", \"%s\", \'%d\']\n", a, b, c);
		PSY(s);
		PSL(p);
	}
	return (f);
}
