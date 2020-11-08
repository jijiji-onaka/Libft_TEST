/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 03:56:55 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 19:47:37 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include <ctype.h>
# include "libft.h"
char			**_split(char const *s, char c);
t_list			*_lstnew(void *content);
int				_lstsize(t_list *lst);
t_list			*_lstlast(t_list *lst);
void			_lstadd_back(t_list **lst, t_list *new);
void			_lstdelone(t_list *lst, void (*del)(void*));
void			_lstclear(t_list **lst, void (*del)(void*));
int				LSTNEW(char *s);
int				LSTSIZE(int size);
int				LSTLAST(void);
int				STRMAPI(char *before, char (*f)(unsigned int i, \
				char c), char *after);
int				STRTRIM(char *str, char *set, char *ans);
int				SUBSTR(char *str, int start, size_t end, char *ans);
int				ITOA(long long a, char *b);
int				SPLIT(char *s, char c);
int				STRJOIN(char *a, char *b);
int				STRNSTR(char *a, char *b, size_t c);

// mallco error 9223372036854775807

# define TITLE color_title(title, &check_flag);

# define RPP(a) (printf("real = %p\n", a))
# define FPP(a) (printf("ft = %p\n", a))
# define PP(a) (printf("%p\n", a))

# define PDL(a) (printf("libc  = %d\n", a))
# define PDY(a) (printf("yours = %d\n", a))
# define PD(a) (printf("argument[%d]\n", a))
# define PD2(a, b) (printf("argument[%d, %d]\n", a, b))

# define RPLD(a) (printf("real = %ld\n", a))
# define FPLD(a) (printf("ft = %ld\n", a))
# define PLD(a) (printf("%ld\n", a))

# define RPULD(a) (printf("real = %lu\n", a))
# define FPULD(a) (printf("ft = %lu\n", a))
# define PULD(a) (printf("%lu\n", a))

# define PSTL(a) (printf("libc  = %zu\n", a))
# define PSTY(a) (printf("yours = %zu\n", a))
# define PST(a) (printf("%zu\n", a))

# define PSL(a) (printf("libc  = %s\n", a))
# define PSY(a) (printf("yours = %s\n", a))
# define PS(a) (printf("argument[%s]\n", a))

# define PCL(a) (printf("libc  = %c\n", a))
# define PCY(a) (printf("yours = %c\n", a))
# define PC(a) (printf("argument[%c]\n", a))

# define OK puts("OK")
# define NO puts("NO")
# define P printf("\x1b[36m----------------------------\033[m\n");
# define MAX(x, y) ((x) > (y) ? (x) : (y))
# define MIN(x, y) ((x) < (y) ? (x) : (y))


int		ATOI(char *a);
int		BZERO(size_t a, size_t b);

int		CALLOC(size_t a, size_t b);

int		ALNUM(int a);
int		ALPHA(int a);

int		ASCII(int a);

int		DIGIT(int a);

int		PRINT(int a);

int		UPPER(int a);
int		LOWER(int a);
int		MEMCCPY(char *a, char *b, char c, size_t d);
int		MEMCHR(char *a, char b, size_t c);

int		MEMCMP(char *a, char *b, size_t c);
int		MEMCPY(char *a, char *b, size_t c);
int		MEMMOVE1(char *a, char *b, size_t c);

int		MEMMOVE2(char *a, size_t b, size_t c);
int		MEMMOVE3(char *a, size_t b, size_t c);

int		MEMSET(char *a, char b, char c);
int		STRCHR(char *a, char b);
int			STRDUP(char *a);
int			STRLEN(char *a);
int			STRLCAT(char *a, char *b, size_t c);
int			STRLCPY(char *a, char *b, size_t c);
int			STRNCMP(char *a, char *b, int c);
int			STRRCHR(char *a, char b);
int			sign_check(int i);
char		strmapi_f(unsigned int i, char c);



#endif
