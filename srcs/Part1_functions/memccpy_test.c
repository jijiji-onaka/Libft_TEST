/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:09:01 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 18:10:39 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		MEMCCPY(char *a, char *b, char c, size_t d)
{
	int f = 0;
	char *s = strdup(a);
	char *p = strdup(a);
	char *s1 = ft_memccpy(s, b, c, d);
	char *s2 = memccpy(p, b, c, d);
	if (!s1 || !s2)
	{
		if (s1 != s2)
			f = 1;
	}
	else
	{
		if (*s1 != *s2)
			f = 1;
		if (strcmp(s, p) != 0)
			f = 1;
	}
	if (f != 0)
	{
		printf("argument[\"%s\", \"%s\", %c, %zu]\n", a, b, c, d);
		PSY(s1);
		PSL(s2);
		P;
	}
	free(s);
	free(p);
	return (f);
}
