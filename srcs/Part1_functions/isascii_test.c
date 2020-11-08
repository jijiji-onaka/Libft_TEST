/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:21:21 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 18:22:13 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		ASCII(int a)
{
	int i = ft_isascii(a);
	int j = isascii(a);
	if (sign_check(i) != sign_check(j))
	{
		PD(a);
		PDY(i);
		PDL(j);
		P
		return (1);
	}
	return (0);
}
