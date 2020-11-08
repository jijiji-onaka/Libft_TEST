/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:59:09 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 18:00:52 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		MEMCPY(char *a, char *b, size_t c)
{
	int f = 0;
	char *s = strdup(a);
	char *p = strdup(a);
	char *s1 = ft_memcpy(s, b, c);
	char *s2 = memcpy(p, b, c);
	if (*s1 != *s2)
		f = 1;
	if (strcmp(s1, s2) != 0)
		f = 1;
	if (f != 0)
	{
		printf("argument[\"%s\", \"%s\", %zu]\n", a, b, c);
		PSY(s1);
		PSL(s1);

	}
	free(s);
	free(p);
	return (f);
}
