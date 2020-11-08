/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:38:22 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 17:40:06 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		STRLEN(char *a)
{
	size_t i = ft_strlen(a);
	size_t j = strlen(a);
	if (i != j)
	{
		printf("argument[\"%s\"]\n", a);
		PSTY(i);
		PSTL(j);
		P;
		return (1);
	}
	return (0);
}
