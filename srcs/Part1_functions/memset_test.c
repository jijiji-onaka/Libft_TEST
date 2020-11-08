/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:48:54 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 17:50:09 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		MEMSET(char *a, char b, char c)
{
	int f = 0;
	char *s = strdup(a);
	char *p = strdup(a);
	char *s1 = ft_memset(s, b, c);
	char *s2 = memset(p, b, c);
	if (*s1 != *s2)
		f = 1;
	if (strcmp(s, p) != 0)
		f = 1;
	if (f != 0)
	{
		printf("argument[\"%s\", \'%c\', %d]\n", a, b, c);
		PSY(s1);
		PSL(s2);
		P;
	}
	free(s);
	free(p);
	return (f);
}
