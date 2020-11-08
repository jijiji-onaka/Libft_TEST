/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:13:30 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 17:26:39 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		STRLCPY(char *a, char *b, size_t c)
{
	char	*s;
	char	*p;
	size_t	i;
	size_t	j;
	int		f;

	s = calloc(11, sizeof(char));
	p = calloc(11, sizeof(char));
	strlcpy(s, a, strlen(a) + 1);
	strlcpy(p, a, strlen(a) + 1);
	i = ft_strlcpy(s, b, c);
	j = strlcpy(p, b, c);
	f = 0;
	if (i != j)
		f++;
	if (strcmp(s, p) != 0)
		f++;
	if (s[strlen(s)] != p[strlen(p)])
		f++;
	if (f != 0)
	{
		printf("argument[\"%s\", \"%s\", %d]\n", a, b, c);
		PSY(s);
		PSTY(i);
		PSL(p);
		PSTL(j);
		P
	}
	free(s);
	free(p);
	return (f);
}
