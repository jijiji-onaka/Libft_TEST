/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:45:48 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 17:47:43 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		STRCHR(char *a, char b)
{
	int f = 0;
	char *s1 = ft_strchr(a, b);
	char *s2 = strchr(a, b);
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
		P;
	}
	return (f);
}
