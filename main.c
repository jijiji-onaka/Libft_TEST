#include "libft.h"
#include "test.h"

int main()
{
	puts("Part 1 - Libc functions");
	puts("-----------------------");

	puts("[atoi]");
	ATOI("0");
	ATOI("000");
	ATOI("1000");
	ATOI("+1000");
	ATOI("-1000");
	ATOI("+++1000");
	ATOI("---1000");
	ATOI("==9");
	ATOI("-+-+-+-+-1000");
	ATOI("               	-1000");
	ATOI("-2147483648");
	ATOI("2147483647");
	ATOI("2147483648");
	ATOI("4294967295");
	ATOI("-429496724");
	ATOI("18446744073709551615");
	ATOI("-18446744073709551615");
	ATOI("63410682753376583680");
	ATOI("-63410682753376583680");

	puts("");
	puts("[bzero]");
	printf("%s", "char s[10] = \"abcdefg\";\n");
	BZERO(1, 3);
	BZERO(10, 5);
	BZERO(10, 9);
	BZERO(5, 5);

	puts("");
	puts("[calloc]");
	CALLOC(2, 1);
	CALLOC(0, 6);
	CALLOC(0, 0);

	puts("");
	puts("[isalnum]");
	ALNUM(47);
	ALNUM(48);
	ALNUM(53);
	ALNUM(57);
	ALNUM(58);
	ALNUM(60);
	ALNUM(64);
	ALNUM(65);
	ALNUM(80);
	ALNUM(90);
	ALNUM(91);
	ALNUM(96);
	ALNUM(97);
	ALNUM(111);
	ALNUM(122);
	ALNUM(123);
	ALNUM(1231);

	puts("");
	puts("[isalpha]");
	ALPHA(64);
	ALPHA(65);
	ALPHA(80);
	ALPHA(90);
	ALPHA(91);
	ALPHA(96);
	ALPHA(97);
	ALPHA(111);
	ALPHA(122);
	ALPHA(123);

	puts("");
	puts("[isascii]");
	ASCII(-1);
	ASCII(0);
	ASCII(65);
	ASCII(127);
	ASCII(128);

	puts("");
	puts("[isdigit]");
	DIGIT(47);
	DIGIT(48);
	DIGIT(54);
	DIGIT(57);
	DIGIT(58);

	puts("");
	puts("[isprint]");
	PRINT(31);
	PRINT(32);
	PRINT(68);
	PRINT(126);
	PRINT(127);

	puts("");
	puts("[toupper]");
	UPPER(96);
	UPPER(97);
	UPPER(100);
	UPPER(122);
	UPPER(123);

	puts("");
	puts("[tolower]");
	LOWER(64);
	LOWER(65);
	LOWER(80);
	LOWER(90);
	LOWER(91);

//mem系はNULLの確認を別途する
	puts("");
	puts("[memccpy]");
	MEMCCPY("abcde", "def", 'f', (size_t)4);
	MEMCCPY("abcde", "def", 'f', (size_t)1);
	MEMCCPY("abcde", "def", 'f', (size_t)100);
	MEMCCPY("aaaaa", "bbb", 'f', (size_t)3);
	MEMCCPY("aaaaa", "aaa", 'a', (size_t)100);
	MEMCCPY("aaaaa", "aaa", '\0', (size_t)100);
	MEMCCPY("aaaaa", "bbb", '\0', (size_t)3);

	puts("");
	puts("[memchr]");
	MEMCHR("ABCDE", 'C', (size_t)5);
	MEMCHR("ABCDE", 'C', (size_t)100);
	MEMCHR("ABCDE", 'a', (size_t)4);
	MEMCHR("ABCDE", 'E', (size_t)4);
	MEMCHR("ABCDE", 'A', (size_t)4);
	MEMCHR("ABCDE", '\0', (size_t)4);
	MEMCHR("ABCDE", '\0', (size_t)5);

	puts("");
	puts("[memcmp]");
	MEMCMP("abc", "abc", (size_t)4);
	MEMCMP("abc", "xyz", (size_t)4);
	MEMCMP("abc", "abcde", (size_t)4);
	MEMCMP("abce", "abcd", (size_t)4);
	MEMCMP("abcde", "abcde", (size_t)0);
	MEMCMP("abcde", "abcde", (size_t)5);

	puts("");
	puts("[memcpy]");
	MEMCPY("abcde", "xyz", (size_t)4);
	MEMCPY("", "xyz", (size_t)0);
	MEMCPY("xyz", "", (size_t)1);
	MEMCPY("", "", (size_t)1);

	puts("");
	puts("[memmove]");
	MEMMOVE1("abcde", "xyz", 4);
	MEMMOVE1("abc", "xyzvw", 3);
	MEMMOVE1("abc", "abc", 4);
	MEMMOVE1("", "", 0);
	MEMMOVE1("abc", "", 0);
	MEMMOVE2("abcdefghij", 3, 5);
	MEMMOVE2("abcdefghij", 0, 5);
	MEMMOVE2("abcdefghij", 5, 0);
	MEMMOVE2("abcdefghij", 0, 0);
	MEMMOVE2("abcdefg", 3, 3);
	MEMMOVE3("abcdefghij", 3, 5);
	MEMMOVE3("abcdefghij", 0, 5);
	MEMMOVE3("abcdefghij", 5, 0);
	MEMMOVE3("abcdefghij", 0, 0);
	MEMMOVE3("abcdefg", 3, 3);

	puts("");
	puts("[memset]");
	MEMSET("aaaaaaaa", 'b', 6);
	MEMSET("aaaaaaaa", 'b', 0);
	MEMSET("aaaaaaaa", '\200', 6);
	MEMSET("aaaaaaaa", 'a', 6);
	MEMSET("aaaaaaaa", '\n', 6);

	puts("");
	puts("[strchr]");
	STRCHR("hello world", ' ');
	STRCHR("hello world", '\0');
	STRCHR("hello world", 'l');
	STRCHR("", '\0');
	STRCHR("", 'a');

	puts("");
	puts("[strdup]");
	STRDUP("42Tokyo");
	STRDUP("");

	puts("");
	puts("[strlen]");
	STRLEN("42Tokyo");
	STRLEN("");

	puts("");
	puts("[strlcat]");
	STRLCAT("42", "tokyo", 5);
	STRLCAT("42Tokyo", "Roppongi", 7);
	STRLCAT("42Tokyo", "Roppongi", 9);
	STRLCAT("42Tokyo", "nop", 11);
	STRLCAT("42Tokyo", "nop", 0);

	puts("");
	puts("[strlcpy]");
	STRLCPY("abcde", "Tokyo", 5);
	STRLCPY("abcde", "Tokyo", 6);
	STRLCPY("abcde", "Tokyo", 0);
	STRLCPY("abcde", "Tokyo", 1);
	STRLCPY("abcde", "42Tokyo", 8);
	STRLCPY("abTokyo", "42", 6);
	STRLCPY("abcde", "42Tokyo", 0);
	STRLCPY("abcde", "42Tokyo", 1);

	puts("");
	puts("[strncmp]");
	STRNCMP("abc", "abc", 4);
	STRNCMP("abc", "abcd", 5);
	STRNCMP("abce", "abc", 4);
	STRNCMP("abce", "abc", 4);
	STRNCMP("abce", "abc", 0);

	puts("");
	puts("[strrchr]");
	STRRCHR("42Tokyo", 'T');
	STRRCHR("42TokyoTo", 'T');
	STRRCHR("hello world", 'l');
	STRRCHR("", '\0');
	STRRCHR("42Tokyo", '\0');

	puts("");
	puts("[strnstr]");
	STRNSTR("42Tokyo", "Tokyo", 0);
	STRNSTR("42Tokyo", "Tokyo", 5);
	STRNSTR("42Tokyo", "42Tokyo", 7);
	STRNSTR("42Tokyo42", "42", 100);
	STRNSTR("42Tokyo42", "42", 1);
	STRNSTR("42Tokyo", "42tokyo", 7);
	STRNSTR("42Tokyo", "", 7);
	STRNSTR("42Tokyo", "", 0);
	STRNSTR("", "", 7);
	STRNSTR("", "", 0);
	STRNSTR("", "42tokyo", 7);
	STRNSTR("", "42tokyo", 0);

	puts("");
	puts("Part 2 - Additional functions");
	puts("-----------------------");

	puts("[strjoin]");
	STRJOIN("42", "Tokyo");
	STRJOIN("42Tokyo", "-tjinichi");
	STRJOIN("", "");
	STRJOIN("", "42");
	STRJOIN("42", "");

	puts("");
	puts("[split]");
	SPLIT("42 Tokyo", ' ');
	SPLIT("42Tokyo", ' ');
	SPLIT("       ", ' ');
	SPLIT("42Tokyo", '\0');
	SPLIT("42  Tokyo", '\0');
	SPLIT("42\0Tokyo", '\0');
	SPLIT("42\200Tokyo", '\0');
	SPLIT("42\0Tokyo", '\200');
	SPLIT("", 'a');
	SPLIT("", '\0');
	SPLIT("", '\200');

	puts("");
	puts("[itoa]");
	ITOA((long long)0, "0");
	ITOA((long long)0000, "0");
	ITOA((long long)+-+-+-1, "-1");
	ITOA((long long)+-+-1, "1");
	ITOA((long long)-123, "-123");
	ITOA((long long)+123, "123");
	ITOA((long long)INT_MIN, "-2147483648");
	ITOA((long long)INT_MAX, "2147483647");
	ITOA((long long)INT_MAX + 1, "-2147483648");
	ITOA((long long)INT_MIN - 1, "2147483647");

	puts("");
	puts("[substr]");
	SUBSTR("abcde", 0, (size_t)3, "abc");
	SUBSTR("abcde", 2, (size_t)3, "cde");
	SUBSTR("abcde", 0, (size_t)10, "abcde");
	SUBSTR("abcde", 10, (size_t)10, "");
	SUBSTR("abcde", 5, (size_t)10, "");
	SUBSTR("abcde", 5, (size_t)9223372036854775807, "");

	puts("");
	puts("[strtrim]");
	STRTRIM("  42Tokyo  ", " ", "42Tokyo");
	STRTRIM(" 11 42Tokyo 11 ", " 1", "42Tokyo");
	STRTRIM("1142Tokyo42", "1", "42Tokyo42");
	STRTRIM("111111111", "1", "");
	STRTRIM("42Tokyo", "1", "42Tokyo");
	STRTRIM("42Tokyo", "42Tokyo", "");

	puts("");
	puts("[strmapi]");
	STRMAPI("abcde", (void*)strmapi_f, "ABCDE");
	STRMAPI("ABCDE", (void*)strmapi_f, "abcde");
	STRMAPI("", (void*)strmapi_f, "");
}
