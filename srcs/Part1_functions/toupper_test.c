/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:15:38 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 18:16:23 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		UPPER(int a)
{
	char i = ft_toupper(a);
	char j = toupper(a);
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
