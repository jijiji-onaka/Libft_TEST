/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:27:22 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 19:47:29 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		ATOI(char *a)
{
	int i = ft_atoi(a);
	int j = atoi(a);
	if (i != j)
	{
		PS(a);
		PDY(i);
		PDL(j);
		P
		return (1);
	}
	return (0);
}
