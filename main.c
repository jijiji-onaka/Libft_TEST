#include "libft.h"
#include "test.h"

static void		color_title(char *s, int *f)
{
	*f = 0;
	printf("\x1b[1m");
	printf("\x1b[4m");
	printf("\x1b[33m");
	printf("[%s]\n", s);
	printf("\x1b[39m");
	printf("\x1b[0m");
	// printf("\n->");
}

static void		yes_or_no(int flag, char *s)
{
	if (flag > 0)
	{
		printf("\x1b[1m");
		printf("\x1b[31m");
		printf("%s", s);
		printf("\x1b[39m");
		printf("\x1b[0m");
		//---------------------------
		printf("\x1b[1m");
		printf("\x1b[31m");
		printf(" has a bug　↑\n");
		printf("\x1b[39m");
		printf("\x1b[0m");
	}
	else
	{
		printf("\x1b[1m");
		printf("\x1b[32m");
		printf("%s", s);
		printf("\x1b[39m");
		printf("\x1b[0m");
		//---------------------------
		printf("\x1b[32m");
		printf(" is clear!\n");
		printf("\x1b[39m");
		printf("\x1b[0m");
	}

}

static void	PART(char *s)
{
	puts("");
	printf("\x1b[30m");
	printf("\x1b[43m%s\x1b[m\n", s);
	printf("\x1b[39m");
	puts("");
}

int main()
{
	int		check_flag;
	char	*title;

	check_flag = 0;

	puts("Part 1 - Libc functions");
	puts("-----------------------");

	title = "atoi";
	TITLE;
	check_flag += ATOI("0");
	check_flag += ATOI("000");
	check_flag += ATOI("1000");
	check_flag += ATOI("+1000");
	check_flag += ATOI("-1000");
	check_flag += ATOI("+++1000");
	check_flag += ATOI("---1000");
	check_flag += ATOI("==9");
	check_flag += ATOI("-+-+-+-+-1000");
	check_flag += ATOI("               	-1000");
	check_flag += ATOI("-2147483648");
	check_flag += ATOI("2147483647");
	check_flag += ATOI("2147483648");
	check_flag += ATOI("4294967295");
	check_flag += ATOI("-429496724");
	check_flag += ATOI("18446744073709551615");
	check_flag += ATOI("-18446744073709551615");
	check_flag += ATOI("63410682753376583680");
	check_flag += ATOI("-63410682753376583680");
	yes_or_no(check_flag, title);

	puts("");
	title = "bzero";
	TITLE;
	printf("\e[33mchar s[10] = \"abcdefg\";\e[m\n");
	check_flag += BZERO(1, 3);
	check_flag += BZERO(10, 5);
	check_flag += BZERO(10, 9);
	check_flag += BZERO(5, 5);
	yes_or_no(check_flag, title);

	puts("");
	title = "calloc";
	TITLE;
	check_flag += CALLOC(2, 1);
	check_flag += CALLOC(0, 6);
	check_flag += CALLOC(0, 0);
	yes_or_no(check_flag, title);

	puts("");
	title = "isalnum";
	TITLE;
	check_flag += ALNUM(47);
	check_flag += ALNUM(48);
	check_flag += ALNUM(53);
	check_flag += ALNUM(57);
	check_flag += ALNUM(58);
	check_flag += ALNUM(60);
	check_flag += ALNUM(64);
	check_flag += ALNUM(65);
	check_flag += ALNUM(80);
	check_flag += ALNUM(90);
	check_flag += ALNUM(91);
	check_flag += ALNUM(96);
	check_flag += ALNUM(97);
	check_flag += ALNUM(111);
	check_flag += ALNUM(122);
	check_flag += ALNUM(123);
	check_flag += ALNUM(1231);
	yes_or_no(check_flag, title);

	puts("");
	title = "isalpha";
	TITLE;
	check_flag += ALPHA(64);
	check_flag += ALPHA(65);
	check_flag += ALPHA(80);
	check_flag += ALPHA(90);
	check_flag += ALPHA(91);
	check_flag += ALPHA(96);
	check_flag += ALPHA(97);
	check_flag += ALPHA(111);
	check_flag += ALPHA(122);
	check_flag += ALPHA(123);
	yes_or_no(check_flag, title);

	puts("");
	title = "isascii";
	TITLE;
	check_flag += ASCII(-1);
	check_flag += ASCII(0);
	check_flag += ASCII(65);
	check_flag += ASCII(127);
	check_flag += ASCII(128);
	yes_or_no(check_flag, title);

	puts("");
	title = "isdigit";
	TITLE;
	check_flag += DIGIT(47);
	check_flag += DIGIT(48);
	check_flag += DIGIT(54);
	check_flag += DIGIT(57);
	check_flag += DIGIT(58);
	yes_or_no(check_flag, title);

	puts("");
	title = "isprint";
	TITLE;
	check_flag += PRINT(31);
	check_flag += PRINT(32);
	check_flag += PRINT(68);
	check_flag += PRINT(126);
	check_flag += PRINT(127);
	yes_or_no(check_flag, title);

	puts("");
	title = "toupper";
	TITLE;
	check_flag += UPPER(96);
	check_flag += UPPER(97);
	check_flag += UPPER(100);
	check_flag += UPPER(122);
	check_flag += UPPER(123);
	yes_or_no(check_flag, title);

	puts("");
	title = "tolower";
	TITLE;
	check_flag += LOWER(64);
	check_flag += LOWER(65);
	check_flag += LOWER(80);
	check_flag += LOWER(90);
	check_flag += LOWER(91);
	yes_or_no(check_flag, title);

//mem系はNULLの確認を別途する
	puts("");
	title = "memccpy";
	TITLE;
	check_flag += MEMCCPY("abcde", "def", 'f', (size_t)4);
	check_flag += MEMCCPY("abcde", "def", 'f', (size_t)1);
	check_flag += MEMCCPY("abcde", "def", 'f', (size_t)100);
	check_flag += MEMCCPY("aaaaa", "bbb", 'f', (size_t)3);
	check_flag += MEMCCPY("aaaaa", "aaa", 'a', (size_t)100);
	check_flag += MEMCCPY("aaaaa", "aaa", '\0', (size_t)100);
	check_flag += MEMCCPY("aaaaa", "bbb", '\0', (size_t)3);
	yes_or_no(check_flag, title);

	puts("");
	title = "memchr";
	TITLE;
	check_flag += MEMCHR("ABCDE", 'C', (size_t)5);
	check_flag += MEMCHR("ABCDE", 'C', (size_t)100);
	check_flag += MEMCHR("ABCDE", 'a', (size_t)4);
	check_flag += MEMCHR("ABCDE", 'E', (size_t)4);
	check_flag += MEMCHR("ABCDE", 'A', (size_t)4);
	check_flag += MEMCHR("ABCDE", '\0', (size_t)4);
	check_flag += MEMCHR("ABCDE", '\0', (size_t)5);
	yes_or_no(check_flag, title);

	puts("");
	title = "memcmp";
	TITLE;
	check_flag += MEMCMP("abc", "abc", (size_t)4);
	check_flag += MEMCMP("abc", "xyz", (size_t)4);
	check_flag += MEMCMP("abc", "abcde", (size_t)4);
	check_flag += MEMCMP("abce", "abcd", (size_t)4);
	check_flag += MEMCMP("abcde", "abcde", (size_t)0);
	check_flag += MEMCMP("abcde", "abcde", (size_t)5);
	yes_or_no(check_flag, title);

	puts("");
	title = "memcpy";
	TITLE;
	check_flag += MEMCPY("abcde", "xyz", (size_t)4);
	check_flag += MEMCPY("", "xyz", (size_t)0);
	check_flag += MEMCPY("xyz", "", (size_t)1);
	check_flag += MEMCPY("", "", (size_t)1);
	yes_or_no(check_flag, title);

	puts("");
	title = "memmove";
	TITLE;
	check_flag += MEMMOVE1("abcde", "xyz", 4);
	check_flag += MEMMOVE1("abc", "xyzvw", 3);
	check_flag += MEMMOVE1("abc", "abc", 4);
	check_flag += MEMMOVE1("", "", 0);
	check_flag += MEMMOVE1("abc", "", 0);
	check_flag += MEMMOVE2("abcdefghij", 3, 5);
	check_flag += MEMMOVE2("abcdefghij", 0, 5);
	check_flag += MEMMOVE2("abcdefghij", 5, 0);
	check_flag += MEMMOVE2("abcdefghij", 0, 0);
	check_flag += MEMMOVE2("abcdefg", 3, 3);
	check_flag += MEMMOVE3("abcdefghij", 3, 5);
	check_flag += MEMMOVE3("abcdefghij", 0, 5);
	check_flag += MEMMOVE3("abcdefghij", 5, 0);
	check_flag += MEMMOVE3("abcdefghij", 0, 0);
	check_flag += MEMMOVE3("abcdefg", 3, 3);
	yes_or_no(check_flag, title);

	puts("");
	title = "memset";
	TITLE;
	check_flag += MEMSET("aaaaaaaa", 'b', 6);
	check_flag += MEMSET("aaaaaaaa", 'b', 0);
	check_flag += MEMSET("aaaaaaaa", '\200', 6);
	check_flag += MEMSET("aaaaaaaa", 'a', 6);
	check_flag += MEMSET("aaaaaaaa", '\n', 6);
	yes_or_no(check_flag, title);

	puts("");
	title = "strchr";
	TITLE;
	check_flag += STRCHR("hello world", ' ');
	check_flag += STRCHR("hello world", '\0');
	check_flag += STRCHR("hello world", 'l');
	check_flag += STRCHR("", '\0');
	check_flag += STRCHR("", 'a');
	yes_or_no(check_flag, title);

	puts("");
	title = "strdup";
	TITLE;
	check_flag += STRDUP("42Tokyo");
	check_flag += STRDUP("");
	yes_or_no(check_flag, title);

	puts("");
	title = "strlen";
	TITLE;
	check_flag += STRLEN("42Tokyo");
	check_flag += STRLEN("");
	yes_or_no(check_flag, title);

	puts("");
	title = "strlcat";
	TITLE;
	check_flag += STRLCAT("42", "tokyo", 5);
	check_flag += STRLCAT("42Tokyo", "Roppongi", 7);
	check_flag += STRLCAT("42Tokyo", "Roppongi", 9);
	check_flag += STRLCAT("42Tokyo", "nop", 11);
	check_flag += STRLCAT("42Tokyo", "nop", 0);
	yes_or_no(check_flag, title);

	puts("");
	title = "strlcpy";
	TITLE;
	check_flag += STRLCPY("abcde", "Tokyo", 5);
	check_flag += STRLCPY("abcde", "Tokyo", 6);
	check_flag += STRLCPY("abcde", "Tokyo", 0);
	check_flag += STRLCPY("abcde", "Tokyo", 1);
	check_flag += STRLCPY("abcde", "42Tokyo", 8);
	check_flag += STRLCPY("abTokyo", "42", 6);
	check_flag += STRLCPY("abcde", "42Tokyo", 0);
	check_flag += STRLCPY("abcde", "42Tokyo", 1);
	yes_or_no(check_flag, title);

	puts("");
	title = "strncmp";
	TITLE;
	check_flag += STRNCMP("abc", "abc", 4);
	check_flag += STRNCMP("abc", "abcd", 5);
	check_flag += STRNCMP("abce", "abc", 4);
	check_flag += STRNCMP("abce", "abc", 4);
	check_flag += STRNCMP("abce", "abc", 0);
	yes_or_no(check_flag, title);

	puts("");
	title = "strrchr";
	TITLE;
	check_flag += STRRCHR("42Tokyo", 'T');
	check_flag += STRRCHR("42TokyoTo", 'T');
	check_flag += STRRCHR("hello world", 'l');
	check_flag += STRRCHR("", '\0');
	check_flag += STRRCHR("42Tokyo", '\0');
	yes_or_no(check_flag, title);

	puts("");
	title = "strnstr";
	TITLE;
	check_flag += STRNSTR("42Tokyo", "Tokyo", 0);
	check_flag += STRNSTR("42Tokyo", "Tokyo", 5);
	check_flag += STRNSTR("42Tokyo", "42Tokyo", 7);
	check_flag += STRNSTR("42Tokyo42", "42", 100);
	check_flag += STRNSTR("42Tokyo42", "42", 1);
	check_flag += STRNSTR("42Tokyo", "42tokyo", 7);
	check_flag += STRNSTR("42Tokyo", "", 7);
	check_flag += STRNSTR("42Tokyo", "", 0);
	check_flag += STRNSTR("", "", 7);
	check_flag += STRNSTR("", "", 0);
	check_flag += STRNSTR("", "42tokyo", 7);
	check_flag += STRNSTR("", "42tokyo", 0);
	yes_or_no(check_flag, title);

	PART("Part 2 - Additional functions");

	title = "strjoin";
	TITLE;
	check_flag += STRJOIN("42", "Tokyo");
	check_flag += STRJOIN("42Tokyo", "-tjinichi");
	check_flag += STRJOIN("", "");
	check_flag += STRJOIN("", "42");
	check_flag += STRJOIN("42", "");
	yes_or_no(check_flag, title);

	puts("");
	title = "split";
	TITLE;
	check_flag += SPLIT("42 Tokyo", ' ');
	check_flag += SPLIT("42Tokyo", ' ');
	check_flag += SPLIT("       ", ' ');
	check_flag += SPLIT("42Tokyo", '\0');
	check_flag += SPLIT("42  Tokyo", '\0');
	check_flag += SPLIT("42\0Tokyo", '\0');
	check_flag += SPLIT("42\200Tokyo", '\0');
	check_flag += SPLIT("42\0Tokyo", '\200');
	check_flag += SPLIT("", 'a');
	check_flag += SPLIT("", '\0');
	check_flag += SPLIT("", '\200');
	yes_or_no(check_flag, title);

	puts("");
	title = "itoa";
	TITLE;
	check_flag += ITOA((long long)0, "0");
	check_flag += ITOA((long long)0000, "0");
	check_flag += ITOA((long long)+-+-+-1, "-1");
	check_flag += ITOA((long long)+-+-1, "1");
	check_flag += ITOA((long long)-123, "-123");
	check_flag += ITOA((long long)+123, "123");
	check_flag += ITOA((long long)INT_MIN, "-2147483648");
	check_flag += ITOA((long long)INT_MAX, "2147483647");
	check_flag += ITOA((long long)INT_MAX + 1, "-2147483648");
	check_flag += ITOA((long long)INT_MIN - 1, "2147483647");
	yes_or_no(check_flag, title);

	puts("");
	title = "substr";
	TITLE;
	check_flag += SUBSTR("abcde", 0, (size_t)3, "abc");
	check_flag += SUBSTR("abcde", 2, (size_t)3, "cde");
	check_flag += SUBSTR("abcde", 0, (size_t)10, "abcde");
	check_flag += SUBSTR("abcde", 10, (size_t)10, "");
	check_flag += SUBSTR("abcde", 5, (size_t)10, "");
	check_flag += SUBSTR("abcde", 5, (size_t)9223372036854775807, "");
	yes_or_no(check_flag, title);

	puts("");
	title = "strtrim";
	TITLE;
	check_flag += STRTRIM("  42Tokyo  ", " ", "42Tokyo");
	check_flag += STRTRIM(" 11 42Tokyo 11 ", " 1", "42Tokyo");
	check_flag += STRTRIM("1142Tokyo42", "1", "42Tokyo42");
	check_flag += STRTRIM("111111111", "1", "");
	check_flag += STRTRIM("42Tokyo", "1", "42Tokyo");
	check_flag += STRTRIM("42Tokyo", "42Tokyo", "");
	yes_or_no(check_flag, title);

	puts("");
	title = "strmapi";
	TITLE;
	check_flag += STRMAPI("abcde", (void*)strmapi_f, "ABCDE");
	check_flag += STRMAPI("ABCDE", (void*)strmapi_f, "abcde");
	check_flag += STRMAPI("", (void*)strmapi_f, "");
	yes_or_no(check_flag, title);

	PART("Part 3 - Bonus functions");

	title = "lstnew";
	TITLE;
	check_flag += LSTNEW("42Tokyo");
	yes_or_no(check_flag, title);

	title = "lstsize";
	TITLE;
	check_flag += LSTSIZE(2);
	check_flag += LSTSIZE(0);
	check_flag += LSTSIZE(10);
	yes_or_no(check_flag, title);

	title = "lstlast";
	TITLE;
	check_flag += LSTLAST();
	yes_or_no(check_flag, title);

}
