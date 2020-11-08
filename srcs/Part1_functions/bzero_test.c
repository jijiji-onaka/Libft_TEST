/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:19:56 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 19:27:21 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		BZERO(size_t a, size_t b)
{
	char s[10] = "abcdefg";
	char c[10] = "abcdefg";
	ft_bzero(s, a);
	bzero(c, a);
	if (c[b] != s[b])
	{
		printf("argument[s, %d] -> compare : s[%d]\n", a, b);
		P;
		return (1);
	}
	return (0);
}
