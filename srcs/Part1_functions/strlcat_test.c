/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:30:00 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 17:31:02 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int		STRLCAT(char *a, char *b, size_t c)
{
	char *s = calloc(11, sizeof(char));
	char *p = calloc(11, sizeof(char));
	strlcpy(s, a, strlen(a) + 1);
	strlcpy(p, a, strlen(a) + 1);
	size_t i = ft_strlcat(s, b, c);
	size_t j = strlcat(p, b, c);
	int f = 0;
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
