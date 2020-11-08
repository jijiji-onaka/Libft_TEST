/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 15:18:41 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 15:21:32 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int			STRRCHR(char *a, char b)
{
	int f = 0;
	char *s1 = ft_strrchr(a, b);
	char *s2 = strrchr(a, b);
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
		printf("argument[\"%s\", \'%c\']\n", a, b);
		PSY(s1);
		PSL(s2);
	}
	return (f);
}
