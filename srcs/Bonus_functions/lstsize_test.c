/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 01:10:07 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/06 02:29:20 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

static void		del(void *a)
{
	t_list *b;

	b = (t_list*)a;
	free(b);
}

int			LSTSIZE(int size)
{
	t_list *a = NULL;
	t_list *b;
	for (int i = 0; i < size; i++)
	{
		b = _lstnew(strdup("b"));
		_lstadd_back(&a, b);
	}
	if (_lstsize(a) != ft_lstsize((a)))
	{
		_lstclear(&a, del);
		return (1);
	}
	_lstclear(&a, del);
	return (0);
}
