/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:25:50 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/07 17:26:49 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test.h"
#include "libft.h"

int			STRJOIN(char *a, char *b)
{
	int f = 0;
	char *s1 = ft_strjoin(a, b);
	size_t a_len = strlen(a);
	size_t b_len = strlen(b);
	size_t len = a_len + b_len + 1;
	char *s2 = malloc(len);
	strlcpy(s2, a, len);
	strlcat(s2, b, len);
	if (strcmp(s1, s2) != 0)
		f++;
	if (s1[a_len + b_len] != s2[a_len + b_len])
		f++;
	if (f != 0)
	{
		printf("argument[\"%s\", \"%s\"]\n", a, b);
		PSY(s1);
		PSL(s2);
	}
	free(s1);
	free(s2);
	return (f);
}
