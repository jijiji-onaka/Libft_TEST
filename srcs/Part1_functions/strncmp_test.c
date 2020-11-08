/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 15:24:18 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 15:33:40 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int			STRNCMP(char *a, char *b, int c)
{
	// printf("%d\n", ft_strncmp("abc", "abc", 4));
	int i = ft_strncmp(a, b, c);
	int j = strncmp(a, b, c);
	if (sign_check(i) != sign_check(j))
	{
		printf("argument[\"%s\", \"%s\", %d]\n", a, b, c);
		PDY(i);
		PDL(j);
		P
		return (1);
	}
	return (0);
}
