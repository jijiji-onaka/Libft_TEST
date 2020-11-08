/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:51:35 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 17:56:50 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		MEMMOVE1(char *a, char *b, size_t c)
{
	int f = 0;
	char *s = strdup(a);
	char *p = strdup(a);
	char *s1 = ft_memmove(s, b, c);
	char *s2 = memmove(p, b, c);
	if (*s1 != *s2)
		f = 1;
	if (strcmp(s, p) != 0)
		f = 1;
	if (f != 0)
	{
		printf("argument[\"%s\", \"%s\", %d]\n", a, b, c);
		PSY(s1);
		PSL(s2);
		P;
	}
	free(s);
	free(p);
	return (f);
}

int		MEMMOVE2(char *a, size_t b, size_t c)
{
	int f = 0;
	char *s = strdup(a);
	char *p = strdup(a);
	char *s1 = ft_memmove(s, s + b, c);
	char *s2 = memmove(p, p + b, c);
	if (*s1 != *s2)
		f = 1;
	if (strcmp(s, p) != 0)
		f = 1;
	if (f != 0)
	{
		printf("argument[\"%s\", \"%s\" + %d, %d]\n", a, a, b, c);
		PSY(s1);
		PSL(s2);
		P;
	}
	free(s);
	free(p);
	return (f);
}

int		MEMMOVE3(char *a, size_t b, size_t c)
{
	int f = 0;
	char *s = strdup(a);
	char *p = strdup(a);
	char *s1 = ft_memmove(s + b, s, c);
	char *s2 = memmove(p + b, p, c);
	if (*s1 != *s2)
		f = 1;
	if (strcmp(s, p) != 0)
		f = 1;
	if (f != 0)
	{
		printf("argument[\"%s\" + %d, \"%s\", %d]\n", a, b, a, c);
		PSY(s1);
		PSL(s2);
		P;
	}
	free(s);
	free(p);
	return (f);
}
