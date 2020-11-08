/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:42:42 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 17:44:56 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		STRDUP(char *a)
{
	int f = 0;
	char *s1 = ft_strdup(a);
	char *s2 = strdup(a);
	if (strcmp(s1, s2) != 0)
		f = 1;
	if (s1[strlen(a)] != s2[strlen(a)])
		f = 1;
	if (f != 0)
	{
		printf("argument[\"%s\"]\n", a);
		PSY(s1);
		PSL(s2);
	}
	free(s1);
	free(s2);
	return (f);
}
