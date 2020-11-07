/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:16:05 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/07 17:19:33 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		ITOA(long long a, char *b)
{
	char *s = ft_itoa(a);
	int f = 0;
	size_t len = strlen(b);
	if (strcmp(s, b) != 0)
	{
		f = 1;
	}
	if (s[len] != b[len])
	{
		f = 1;
	}
	if (f != 0)
	{
		printf("argument[%lld]\n", a);
		PSY(s);
		printf("mine  = %s\n", b);
		P
	}
	free(s);
	return (f);
}
