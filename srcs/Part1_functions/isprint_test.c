/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:17:44 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 18:18:58 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		PRINT(int a)
{
	int i = ft_isprint(a);
	int j = isprint(a);
	if (sign_check(i) != sign_check(j))
	{
		PD(a);
		PDY(i);
		PDL(j);
		P;
		return (1);
	}
	return (0);
}
