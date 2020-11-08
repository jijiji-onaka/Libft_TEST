/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:12:35 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 18:13:36 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		LOWER(int a)
{
	char i = ft_tolower(a);
	char j = tolower(a);
	if (i != j)
	{
		PC(a);
		PCY(i);
		PCL(j);
		P
		return (1);
	}
	return (0);
}
