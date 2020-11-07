/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstast_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 02:13:23 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/06 02:47:28 by tjinichi         ###   ########.fr       */
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

int		LSTLAST(void)
{
	t_list *a = NULL;
	t_list *b;
	int f = 0;
	for (int i = 0; i < 3; i++)
	{
		b = _lstnew(strdup("b"));
		_lstadd_back(&a, b);
	}
	b = _lstnew(strdup("42Tokyo"));
	_lstadd_back(&a, b);
	a = _lstlast(a);
	if (strcmp(a->content, "42Tokyo") != 0)
	{
		f = 1;
	}
	if (f != 0)
	{
		_lstclear(&a, del);
		return (1);
	}
	_lstclear(&a, del);
	return (0);
}
