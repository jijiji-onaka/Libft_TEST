/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:03:58 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/07 17:13:50 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		SUBSTR(char *str, int start, size_t end, char *ans)
{
	char	*s = ft_substr(str, start, end);
	size_t	len = strlen(ans);
	int		f = 0;
	if (strcmp(s, ans) != 0)
	{
		f = 1;
	}
	else if (s[len] != ans[len])
	{
		f = 1;
	}
	if (f == 1)
	{
		printf("argument[\"%s\", %d, %zu]\n", str, start, end);
		PSY(s);
		printf("mine  = %s\n", ans);
		P
	}
	free(s);
	return (f);
}
