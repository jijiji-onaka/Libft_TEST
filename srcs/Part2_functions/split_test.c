/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:19:55 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/07 17:26:56 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		SPLIT(char *s, char c)
{
	char **p = ft_split(s, c);
	int k = 0;
	char **l = _split(s, c);
	int f = 0;
	if (!p || !s)
	{
		puts("return value : NULL");
		return (1);
	}
	while (p[k])
	{
		if (strcmp(l[k], p[k]) != 0)
		{
			free(p[k]);
			free(l[k]);
			f = 1;
			break;
		}
		free(p[k]);
		free(l[k]);
		k++;
	}
	if (l[k] != p[k])
		f = 1;
	if (f != 0)
	{
		printf("argument[\"%s\", \'%c\']\n", s, c);
		PSY(p[k]);
		printf("mine  = %s\n", l[k]);
		P
	}
	free(p);
	free(l);
	return (f);
}
