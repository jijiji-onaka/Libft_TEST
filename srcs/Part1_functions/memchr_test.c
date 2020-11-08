/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:05:40 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 18:08:41 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		MEMCHR(char *a, char b, size_t c)
{
	int f = 0;
	char *s = strdup(a);
	char *p = strdup(a);
	char *s1 = ft_memchr(s, b, c);
	char *s2 = memchr(p, b, c);
	if (!s1 || !s2)
	{
		if (s1 != s2)
			f = 1;
	}
	else
	{
		if (*s1 != *s2)
			f = 1;
		if (strcmp(s1, s2) != 0)
			f = 1;
	}
	if (f != 0)
	{
		printf("argument[\"%s\", \'%c\', %zu]\n", a, b, c);
		PSY(s1);
		PSL(s2);
		P;
	}
	free(s);
	free(p);
	return (f);
}
