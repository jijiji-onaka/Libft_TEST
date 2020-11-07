/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:32:48 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/07 16:48:48 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		STRMAPI(char *before, char (*f)(unsigned int i, char c), char *after)
{
	char	*s;
	size_t	len;
	int		flag;

	s = ft_strmapi(before, f);
	len = strlen(after);
	flag = 0;
	if (strcmp(s, after) != 0)
	{
		flag = 1;
	}
	else if (s[len] != after[len])
	{
		flag = 1;
	}
	if (flag == 1)
	{
		printf("argument[\"%s\", Pointer to a function to swap lowercase and uppercase letters]\n", before);
		PSY(s);
		printf("mine  = %s\n", after);
		P;
	}
	free(s);
	return (flag);
}
