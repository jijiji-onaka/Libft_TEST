/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:26:23 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 19:19:38 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		CALLOC(size_t a, size_t b)
{
	char *p = ft_calloc(a, b);
	if (a == 0 || b == 0)
	{
		if (p[0] != '\0')
		{
			printf("\x1b[35myour function does'nt protect when one of the arguments is 0\033[m\n");
			printf("argument[%zu, %zu]\n", a, b);
			P;
			return (0);
		}
	}
	char *s = calloc(a, b);
	int f = 0;
	if (s[a * b - 1] != p[a * b - 1])
	{
		printf("argument[%zu, %zu]\n", a, b);
		printf("yours = %p\n", p[a * b - 1]);
		printf("libc  = %p\n", s[a * b - 1]);
		P;
		f = 1;
	}
	free(s);
	free(p);
	return (f);
}
