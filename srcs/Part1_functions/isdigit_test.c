/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:19:48 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 18:20:56 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		DIGIT(int a)
{
	int i = ft_isdigit(a);
	int j = isdigit(a);
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
