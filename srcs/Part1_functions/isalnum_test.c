/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:24:46 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 18:25:21 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		ALNUM(int a)
{
	int i = ft_isalnum(a);
	int j = isalnum(a);
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
