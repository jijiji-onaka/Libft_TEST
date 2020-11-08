/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:01:55 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 18:03:50 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		MEMCMP(char *a, char *b, size_t c)
{
	int f = 0;
	char *s = strdup(a);
	char *p = strdup(b);
	int i = ft_memcmp(s, p, c);
	int j = memcmp(s, p, c);
	if (sign_check(i) != sign_check(j))
		f = 1;
	if (f != 0)
	{
		printf("argument[\"%s\", \"%s\", %zu]\n", a, b, c);
		PDY(i);
		PDL(j);
		P;
	}
	free(s);
	free(p);
	return (f);
}
