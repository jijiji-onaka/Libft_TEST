/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 23:31:47 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/06 02:08:20 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

static int	test(char *s)
{
	t_list *a = ft_lstnew(s);
	if (strcmp(a->content, s) != 0)
	{
		free(a);
		return (1);
	}
	else
	{
		free(a);
		return (0);
	}
}

int			LSTNEW(char *s)
{
	int res = test(s);
	if (res == 1)
		return (1);
	return (0);
}
