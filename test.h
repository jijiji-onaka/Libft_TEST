/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 03:56:55 by tjinichi          #+#    #+#             */
/*   Updated: 2020/11/08 17:31:38 by tjinichi         ###   ########.fr       */
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

# define ATOI(a) ({ \
	int i = ft_atoi(a);int j = atoi(a); \
	if (i == j) ; else{PS(a); NO; PDY(i); PDL(j); P}})

# define BZERO(a, b) ( {\
	char s[10] = "abcdefg";char c[10] = "abcdefg"; \
	ft_bzero(s, a); bzero(c, a); \
	if (c[b] == s[b]) ; else{ \
	printf("argument[s, %d] -> compare : s[%d]\n", a, b); NO; P}})

# define CALLOC(a, b) ({ \
	char *p = ft_calloc(a, b); char *s = calloc(a, b); \
	if (s[MAX(0, a - 1)] == p[MAX(0, a - 1)]) ; else{ NO;} free(s);free(p);})

# define ALNUM(a) ( {\
	int i = ft_isalnum(a); int j = isalnum(a); \
	if ((i > 0 && j > 0) || (i == 0 && j == 0)) ; \
	else {PD(a);NO; PDY(i); PDL(j); P} })

# define ALPHA(a) ( { \
	int i = ft_isalpha(a); int j = isalpha(a); \
	if ((i > 0 && j > 0) || (i == 0 && j == 0)) ; \
	else {PD(a);NO; PDY(i); PDL(j); P} })

# define ASCII(a) ( {\
	int i = ft_isascii(a); int j = isascii(a); \
	if ((i > 0 && j > 0) || (i == 0 && j == 0)) ; \
	else {PD(a);NO; PDY(i); PDL(j); P} })

# define DIGIT(a) ( {\
	int i = ft_isdigit(a); int j = isdigit(a); \
	if ((i > 0 && j > 0) || (i == 0 && j == 0)) ; \
	else {PD(a);NO; PDY(i); PDL(j); P} })

# define PRINT(a) ( {\
	int i = ft_isprint(a); int j = isprint(a); \
	if ((i > 0 && j > 0) || (i == 0 && j == 0)) ; \
	else {PD(a);NO; PDY(i); PDL(j); P} })

# define UPPER(a) ( {\
	char i = ft_toupper(a); char j = toupper(a); \
	if (i == j) ;\
	else {PC(a);NO; PCY(i); PCL(j); P} })

# define LOWER(a) ( {\
	char i = ft_tolower(a); char j = tolower(a); \
	if (i == j) ; \
	else {PC(a);NO; PCY(i); PCL(j); P} })

# define MEMCCPY(a, b, c, d) ( {\
	int f = 0; \
	char *s = strdup(a); char *p = strdup(a); \
	char *s1 = ft_memccpy(s, b, c, d); \
	char *s2 = memccpy(p, b, c, d); \
	if (!s1 || !s2){if (!s1 && !s2) ; else {printf("argument[\"%s\", \"%s\", %c, %zu]\n", a, b, c, d);}}\
	else if (s1 && s2) { if (*s1 != *s2) f++; \
	if (strcmp(s, p) != 0) f++; \
	if (f != 0) {NO; printf("argument[\"%s\", \"%s\", %c, %zu]\n", a, b, c, d); \
	}} free(s); free(p);})

# define MEMCHR(a, b, c) ( {\
	int f = 0; \
	char *s = strdup(a); char *p = strdup(a); \
	char *s1 = ft_memchr(s, b, c); \
	char *s2 = memchr(p, b, c); \
	if (!s1 || !s2) {if (!s1 && !s2) ; else {printf("argument[\"%s\", \'%c\', %zu]\n", a, b, c);} }\
	else if (*s1 != *s2) {f++;\
	if (f != 0) {printf("argument[\"%s\", \'%c\', %zu]\n", a, b, c);}} free(s); free(p); })

# define MEMCMP(a, b, c) ( {\
	int f = 0; \
	char *s = strdup(a); char *p = strdup(b); \
	int i = ft_memcmp(s, p, c); \
	int j = memcmp(s, p, c); \
	if (i != j) f++; \
	if (f != 0) {NO ;printf("argument[\"%s\", \"%s\", %zu]\n", a, b, c);} \
	free(s); free(p); })

# define MEMCPY(a, b, c) ( {\
	int f = 0; \
	char *s = strdup(a); char *p = strdup(a); \
	char *s1 = ft_memcpy(s, b, c); \
	char *s2 = memcpy(p, b, c); \
	if (*s1 != *s2) f++; \
	if (strcmp(s, p) != 0) f++; \
	if (f != 0) {NO ;printf("argument[\"%s\", \"%s\", %zu]\n", a, b, c);}\
	free(s); free(p);  })

# define MEMMOVE1(a, b, c) ( {\
	int f = 0; \
	char *s = strdup(a); char *p = strdup(a); \
	char *s1 = ft_memmove(s, b, c); \
	char *s2 = memmove(p, b, c); \
	if (*s1 != *s2) f++; \
	if (strcmp(s, p) != 0) f++; \
	if (f != 0) {NO ;printf("argument[\"%s\", \"%s\", %d]\n", a, b, c); \
	PSY(s1); PSL(s2);} \
	free(s); free(p); })


# define MEMMOVE2(a, b, c) ( {\
	int f = 0; \
	char *s = strdup(a); char *p = strdup(a);\
	char *s1 = ft_memmove(s, s + b, c); \
	char *s2 = memmove(p, p + b, c); \
	if (*s1 != *s2) f++; \
	if (strcmp(s, p) != 0) f++; \
	if (f != 0) {NO ;printf("argument[\"%s\", \"%s\" + %d, %d]\n", a, a, b, c); \
	PSY(s1); PSL(s2);} \
	free(s); free(p); })

# define MEMMOVE3(a, b, c) ( {\
	int f = 0; \
	char *s = strdup(a); char *p = strdup(a);\
	char *s1 = ft_memmove(s + b, s, c); \
	char *s2 = memmove(p + b, p, c); \
	if (*s1 != *s2) f++; \
	if (strcmp(s, p) != 0) f++; \
	if (f != 0) {NO ;printf("argument[\"%s\" + %d, \"%s\", %d]\n", a, b, a, c); \
	PSY(s1); PSL(s2);} \
	free(s); free(p); })

# define MEMSET(a, b, c) ( {\
	int f = 0; \
	char *s = strdup(a); char *p = strdup(a);\
	char *s1 = ft_memset(s, b, c); \
	char *s2 = memset(p, b, c); \
	if (*s1 != *s2) f++; \
	if (strcmp(s, p) != 0) f++; \
	if (f != 0) {NO ;printf("argument[\"%s\", \'%c\', %d]\n", a, b, c); \
	PSY(s1); PSL(s2);} \
	free(s); free(p); })

# define STRCHR(a, b) ( {\
	int f = 0; \
	char *s1 = ft_strchr(a, b); \
	char *s2 = strchr(a, b); \
	if (!s1 || !s2) {if (!s1 && !s2) ; else {printf("argument[\"%s\", \'%c\']\n", a, b);} }\
	else {if (*s1 != *s2) f++; \
	if (strcmp(s1, s2) != 0) f++; \
	if (f != 0) {NO ;printf("argument[\"%s\", \'%c\']\n", a, b); \
	PSY(s1); PSL(s2);}}})

# define STRDUP(a) ( {\
	int f = 0; \
	char *s1 = ft_strdup(a); \
	char *s2 = strdup(a); \
	if (strcmp(s1, s2) != 0) f++; \
	if (s1[strlen(a)] != s2[strlen(a)]) f++; \
	if (f != 0) {NO; printf("argument[\"%s\"]\n", a); \
	PSY(s1); PSL(s2);} \
	free(s1); free(s2);})

# define STRLEN(a)( { \
	size_t i = ft_strlen(a); size_t j = strlen(a); \
	if (i == j) ; else {{NO; printf("argument[\"%s\"]\n", a); \
	PSTY(i); PSTL(j);}}1;})

int			STRLCAT(char *a, char *b, size_t c);
int			STRLCPY(char *a, char *b, size_t c);
int			STRNCMP(char *a, char *b, int c);
int			STRRCHR(char *a, char b);
int			sign_check(int i);
char		strmapi_f(unsigned int i, char c);



#endif
