/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 16:08:22 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/07 16:47:06 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		STRTRIM(char *str, char *set, char *ans)
{
	char	*s;
	size_t	len;
	int		flag;

	s = ft_strtrim(str, set);
	len = strlen(ans);
	flag = 0;
	if (strcmp(s, ans) != 0)
	{
		flag = 1;
	}
	else if (s[len] != ans[len])
	{
		flag = 1;
	}
	if (flag == 1)
	{
		printf("argument[\"%s\", \"%s\"]\n", str, set);
		PSY(s);
		printf("mine  = %s\n", ans);
		P;
	}
	free(s);
	return (flag);
}
